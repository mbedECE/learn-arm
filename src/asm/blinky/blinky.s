	.syntax unified
	.cpu cortex-m3
	.thumb

	.word 0x20000400
	.word 0x080000ed
	.space 0xe4

	ldr	r0, =0x00000010
	ldr	r1, =0x40021018
	str	r0, [r1]	@ Set IOPCEN bit in RCC_APB2ENR to 1 to enable GPIOC
	
	ldr	r0, =0x44244444
	ldr	r1, =0x40011004 
	str	r0, [r1]	@ Set CNF13:MODE13 in GPIOC_CRH to 2
	
	ldr	r0, =0x2000
	ldr	r1, =0x4001080C
	str	r0, [r1]	@ Set ODR138 in GPIOA_ODR to 1 to set PC13 high

	b	.
	.end
