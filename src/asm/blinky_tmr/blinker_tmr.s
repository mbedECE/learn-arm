.syntax unified
.cpu cortex-m3
.thumb

SCS = 0xe000e000
SCS_SYST_CSR = 0x10
SCS_SYST_RVR = 0x14
SCS_SYST_CVR = 0x18

RCC_APB2ENR = 0x40021018

GPIOA=0x40010800
GPIOx_CRH = 0x04
GPIOx_BSRR = 0x10

GPIOx_BSRR_BS8 = 0x100
GPIOx_BSRR_BR8 = 0x1000000

DelayLoopIterations = 2000000
NumberOfFlashes = 2

.text
.type Reset_Handler, %function
.global Reset_Handler
Reset_Handler:

bl EnablePortA
bl ConfigurePortA
bl Blinkloop
b  .

.type Blinkloop, %function
Blinkloop:
push {r4-r9, lr }
	movw r4, #:lower16:GPIOA
	movt r4, #:upper16:GPIOA
	
	ldr r5, =GPIOx_BSRR_BS8
	ldr r6, =GPIOx_BSRR_BR8
	ldr r7, =BlinkTable
	ldr r8, =BlinkTableEnd
	ldr r9, =NumberOfFlashes

	repeat:
		pattern:
		str r5, [r4, #GPIOx_BSRR]			@ Set BS8 in GPIOA_BSRR to 1 to set PA8 high
		ldr r0, [r7], #4				@ get the next array value
			
		@The LED connected to PA8 is on and we wait
		bl  Delay

		str r6, [r4, #GPIOx_BSRR]			@ Set BR8 in GPIOA_BSRR to 1 to set PA8 low
		ldr r0, [r7], #4				@ get the next array value
		
		@The LED connected to PA8 is on and we wait
		bl  Delay
		
		cmp r7, r8
		blo pattern
		
		ldr r7, =BlinkTable

	subs r9, #1
	bne  repeat

pop {r4-r9, lr } 
mov pc, lr


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

@ Parameters: r0 = Number of iterations
.type Delay, %function
Delay:
	ldr r1, =SCS
		
	str r0, [r1, #SCS_SYST_RVR]
	ldr r0, =0
	str r0, [r1, #SCS_SYST_CVR]
	
	ldr r0, =5
	str r0, [r1, #SCS_SYST_CSR]
	
DelayLoop:
	ldr r0, [r1, #SCS_SYST_CSR]
	tst r0, #0x10000
	beq DelayLoop
	
	ldr r0, =0
	str r0, [r1, #SCS_SYST_CSR]
	
	bx lr


.align 2
.type BlinkTable, %object
BlinkTable:
	.word	1000000, 1000000, 2000000, 2000000, 3000000, 3000000
	.word	4000000, 4000000, 5000000, 5000000, 5000000, 1000000
	.word	4000000, 1000000, 3000000, 1000000, 2000000, 1000000
BlinkTableEnd:
.end
