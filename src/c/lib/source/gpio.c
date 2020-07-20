#include <stdint.h>
#include "../include/gpio.h"


//PORTA
uint32_t *GPIOA_CRL =(uint32_t*)PORTA_BASE;
uint32_t *GPIOA_CRH =(uint32_t*)(PORTA_BASE + 0x04);
uint32_t *GPIOA_IDR =(uint32_t*)(PORTA_BASE + 0x08);
uint32_t *GPIOA_ORD =(uint32_t*)(PORTA_BASE + 0x0C);
uint32_t *GPIOA_BSRR =(uint32_t*)(PORTA_BASE + 0x10);
uint32_t *GPIOA_BRR =(uint32_t*)(PORTA_BASE + 0x14);
uint32_t *GPIOA_LCKR =(uint32_t*)(PORTA_BASE + 0x18);

//PORTB
uint32_t *GPIOB_CRL =(uint32_t*)PORTB_BASE;
uint32_t *GPIOB_CRH =(uint32_t*)(PORTB_BASE + 0x04);
uint32_t *GPIOB_IDR =(uint32_t*)(PORTB_BASE + 0x08);
uint32_t *GPIOB_ORD =(uint32_t*)(PORTB_BASE + 0x0C);
uint32_t *GPIOB_BSRR =(uint32_t*)(PORTB_BASE + 0x10);
uint32_t *GPIOB_BRR =(uint32_t*)(PORTB_BASE + 0x14);
uint32_t *GPIOB_LCKR =(uint32_t*)(PORTB_BASE + 0x18);

//PORTC
uint32_t *GPIOC_CRL =(uint32_t*)PORTC_BASE;
uint32_t *GPIOC_CRH =(uint32_t*)(PORTC_BASE + 0x04);
uint32_t *GPIOC_IDR =(uint32_t*)(PORTC_BASE + 0x08);
uint32_t *GPIOC_ORD =(uint32_t*)(PORTC_BASE + 0x0C);
uint32_t *GPIOC_BSRR =(uint32_t*)(PORTC_BASE + 0x10);
uint32_t *GPIOC_BRR =(uint32_t*)(PORTC_BASE + 0x14);
uint32_t *GPIOC_LCKR =(uint32_t*)(PORTC_BASE + 0x18);

//PORTD
uint32_t *GPIOD_CRL =(uint32_t*)PORTD_BASE;
uint32_t *GPIOD_CRH =(uint32_t*)(PORTD_BASE + 0x04);
uint32_t *GPIOD_IDR =(uint32_t*)(PORTD_BASE + 0x08);
uint32_t *GPIOD_ORD =(uint32_t*)(PORTD_BASE+ 0x0C);
uint32_t *GPIOD_BSRR =(uint32_t*)(PORTD_BASE + 0x10);
uint32_t *GPIOD_BRR =(uint32_t*)(PORTD_BASE + 0x14);
uint32_t *GPIOD_LCKR =(uint32_t*)(PORTD_BASE + 0x18);

//PORTE
uint32_t *GPIOE_CRL =(uint32_t*)PORTE_BASE;
uint32_t *GPIOE_CRH =(uint32_t*)(PORTE_BASE + 0x04);
uint32_t *GPIOE_IDR =(uint32_t*)(PORTE_BASE + 0x08);
uint32_t *GPIOE_ORD =(uint32_t*)(PORTE_BASE + 0x0C);
uint32_t *GPIOE_BSRR =(uint32_t*)(PORTE_BASE + 0x10);
uint32_t *GPIOE_BRR =(uint32_t*)(PORTE_BASE + 0x14);
uint32_t *GPIOE_LCKR =(uint32_t*)(PORTE_BASE + 0x18);




