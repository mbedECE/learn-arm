.syntax unified
.cpu cortex-m3
.thumb

.section .VectorTable, "a"
.word _StackEnd
.word Reset_Handler
.space 0xe4

.text
.type Reset_Handler, %function
Reset_Handler:
	
ldr r1, =0x40021018
ldr r0, [r1]
orr r0, r0, #4
str r0, [r1]			@ Set IOPAEN bit in RCC_APB2ENR to 1 to enable GPIOA

ldr r1, =0x40010804
ldr r0, [r1]
and r0, #0xfffffff0
orr r0, #2
str r0, [r1]			@ Set CNF8:MODE8 in GPIOA_CRH to 2

ldr r0, =0x40010810
ldr r1, =0x100
ldr r2, =0x01000000
ldr r3, =1000000

Blinkloop:
str r1, [r0]			@ Set BS8 in GPIOA_BSRR to 1 to set PA8 high

@The LED connected to PA8 is on and we wait
mov r4, r3
delay1:
subs r4, #1
bne delay1

str r2, [r0]			@ Set BR8 in GPIOA_BSRR to 1 to set PA8 low

@The LED connected to PA8 is on and we wait
mov r4, r3
delay2:
subs r4, #1
bne delay2

b   Blinkloop
.end
