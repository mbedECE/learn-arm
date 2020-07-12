.syntax unified
.cpu cortex-m3
.thumb

.word 0x20000400
.word 0x080000ed
.space 0xe4

.data
voltage: .space 4
current: .space 4
temperature: .space 4

.text

nop
b	.
.end
