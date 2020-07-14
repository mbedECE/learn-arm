.syntax unified
.cpu cortex-m3
.thumb

.include "bluepill.inc"

.data
	TimerValue: .word 0xFFFF00
	
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
	
	ldr r1, =TimerValue

	ldr r0, [r1]
	bl StartSysTimer

SleepLoop:
		wfi
		b  SleepLoop
	.ltorg

.type SysTick_Handler, %function
.global SysTick_Handler
SysTick_Handler:
	@ Check to see if interrupt /exception was fired
	ldr r0, =SCS
	ldr r0, [r0, #SCS_SYST_CSR]
	tst r0, #0x10000
	beq Finished
	
	@toggle LED
	ldr r0, =GPIOA
	ldr r1, [r0, GPIOx_ORD]
	eor r1, #GPIOx_ORD8
	str r1, [r0, GPIOx_ORD]	
Finished:
	bx  lr


.type EnablePortA, %function
EnablePortA:
	ldr r1, =RCC_APB2ENR
	ldr r0, [r1]
	orr r0, r0, #4
	str r0, [r1]                    @ Set IOPAEN bit in RCC_APB2ENR to 1 to enable GPIOA	
	bx  lr


.type ConfigurePortA, % function
ConfigurePortA:
	ldr r1, =GPIOA
	ldr r0, [r1, #GPIOx_CRH]		@ offset addressing
	and r0, #0xfffffff0
	orr r0, #2
	str r0, [r1, #GPIOx_CRH]         @ Set CNF8:MODE8 in GPIOA_CRH to 2
	bx  lr


@ Parameters: r0 = TimerValue
.type StartSysTimer, %function
StartSysTimer:
	ldr r1, =SCS
	str r0, [r1, #SCS_SYST_RVR]

	ldr r0, =0
	str r0, [r1, #SCS_SYST_CVR]

	ldr r0, =7
	str r0, [r1, #SCS_SYST_CSR]

	bx  lr
.end
