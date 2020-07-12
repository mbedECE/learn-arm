.syntax unified
.cpu cortex-m3
.thumb

RCC_APB2ENR = 0x40021018
GPIOA_CRH = 0x40010804
GPIOA_BSRR = 0x40010810

DelayLoopIterations = 5000000
NumberOfFlashes = 5

.text
.type Reset_Handler, %function
.global Reset_Handler
Reset_Handler:

bl EnablePortA
bl ConfigurePortA

bl  Blinkloop
b  .

.type Blinkloop, %function
Blinkloop:
push { lr }

	ldr r0, =0x40010810
	ldr r1, =0x100
	ldr r2, =0x01000000
	ldr r3, =DelayLoopIterations
	ldr r5, =NumberOfFlashes

	repeat:
	str r1, [r0]			@ Set BS8 in GPIOA_BSRR to 1 to set PA8 high

	@The LED connected to PA8 is on and we wait
	bl  Delay

	str r2, [r0]			@ Set BR8 in GPIOA_BSRR to 1 to set PA8 low

	@The LED connected to PA8 is on and we wait
	bl  Delay

	subs r5, #1
	bne  repeat

pop { lr } 
bx  lr

.type Delay, %function
Delay:
mov r4, r3
loop:
	subs r4, #1
	bne  loop
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
ldr r1, =GPIOA_CRH
ldr r0, [r1]
and r0, #0xfffffff0
orr r0, #2
str r0, [r1]                    @ Set CNF8:MODE8 in GPIOA_CRH to 2
bx  lr
.end
