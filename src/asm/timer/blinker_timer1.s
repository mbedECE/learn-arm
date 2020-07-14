.syntax unified
.cpu cortex-m3
.thumb

.include "bluepill.inc"


TimerPrescaler=1000

.data
	TimerValue: .hword 1500
	TimerPrescaler: .hword 1000
	RepeatCounterValue: .hword 9
	
.bss
	NumberOfFlashes: .space 1
	

.text
.type Reset_Handler, %function
.global Reset_Handler
Reset_Handler:
	ldr r0, =_DataStart
	ldr r1, =_DataEnd
	ldr r2, =_DataLoad

	b 2f
1:	ldr r3, [r2], #4
	str r3, [r0], #4
2:	cmp r0, r1
	blo 1b

	ldr r0, =_BssStart
	ldr r1, =_BssEnd
	ldr r2, =0

	b 2f
1:	str r2, [r0], #4
2:	cmp r0, r1
	blo 1b

	bl EnablePortA
	bl ConfigurePortA
	bl EnableClockTIM1
	
	ldr r0, =TIM1_UP_IRQ
	bl EnableIRQ
	bl StartTIM1

SleepLoop:
		wfi
		b  SleepLoop
	.ltorg


.type StartTIM1, %function
StartTIM1:
	ldr r0, =TIM1
	
	ldr r1, =TimerValue
	ldrh r2, [r1]
	strh r2, [r0, #TIMx_ARR]

	ldr r1, =TimerPrescaler
	ldrh r2, [r1]
	strh r2, [r0, #TIMx_PSC]
	
	ldr r1, =RepeatCounterValue
	ldrh r2, [r1]
	strh r2, [r0, #TIMx_RCR]
	
	ldr r1, [ r0, #TIMx_DIER]
	orr r1, r1, #(1 << TIMx_DIER_UIE)	@ Update interrupt enabled
	str r1, [r0, #TIMx_DIER]
	
	ldr r1, =(1 << TIMx_EGR_UG)
	str r1, [r0, TIMx_EGR]			@ Reinitialize the counter and generates an update of the registers
	
	ldr r1, [r0, #TIMx_CR1]
	orr r1, r1, #(1 << TIMx_CR1_URS)	@ Only counter overflow/underflow generates an update interrupt
	orr r1, r1, #(1 << TIMx_CR1_ARPE)	@ TIMx_ARR register is buffered
	orr r1, r1, #(1 << TIMx_CR1_CEN)	@ Enable Timer
	str r1, [r0, #TIMx_CR1]	
	
	bx lr
	.ltorg
	
	
.type TIM1_UP_IRQHandler, %function
.global TIM1_UP_IRQHandler
TIM1_UP_IRQHandler:
	ldr r0, =TIM1
	ldr r2, =(~(1 << TIMx_SR_UIF))
	
	ldr r1, [r0, #TIMx_SR]
	bics r1, r2
	beq Finished
	
	str r2, [r0, #TIMx_SR]
	
	@toggle LED
	ldr r0, =GPIOA
	ldr r1, [r0, GPIOx_ORD]
	eor r1, #GPIOx_ORD8
	str r1, [r0, GPIOx_ORD]	
	
Finished:
	bx lr
	.ltorg
	
	
@ r0 = IRQ Number
.type EnableIRQ, %function
EnableIRQ:
	ldr r1, =NVIC_ISER0
	
	movs r2, #1
	and r3, r0, #0x1F	@ determine x mod 32
	lsls r2, r2, r3
	
	lsrs r3, r0, #5		@divide by 32 to get the register number i.e 0 to 15
	lsls r3, r3, #2		@ multiply by 4: addresses are 4 bytes
	
	str r2, [r1, r3]

	bx lr
	.ltorg


.type EnablePortA, %function
EnablePortA:
	ldr r1, =RCC
	ldr r0, [r1, #RCC_APB2ENR]
	orr r0, r0, #(1 << RCC_APB2ENR_IOPAEN)
	str r0, [r1, #RCC_APB2ENR]                   @ Set IOPAEN bit in RCC_APB2ENR to 1 to enable GPIOA	
	bx  lr
	.ltorg

.type ConfigurePortA, % function
ConfigurePortA:
	ldr r1, =GPIOA
	ldr r0, [r1, #GPIOx_CRH]		@ offset addressing
	and r0, #0xfffffff0
	orr r0, #2
	str r0, [r1, #GPIOx_CRH]         @ Set CNF8:MODE8 in GPIOA_CRH to 2
	bx  lr
	.ltorg


.type EnableClockTIM1, %function
EnableClockTIM1:
	ldr r1, =RCC
	ldr r0, [r1, #RCC_APB2ENR]
	orr r0, r0, #(1 << RCC_APB2ENR_TIM1EN)
	str r0, [r1, #RCC_APB2ENR]		@ Set TIM1EN bit in RCC_APB2ENR to 1 to enable TIM1
	bx lr	
	.ltorg
.end
