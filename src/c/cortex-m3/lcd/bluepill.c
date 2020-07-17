#include <stdint.h>

#include "bluepill.h"

uint32_t *NVIC_ISER0 =(uint32_t*)0xE000E100;
uint32_t *NVIC_ISER1 =(uint32_t*)0xE000E104;


//RCC
uint32_t *RCC_APB2ENR = (uint32_t*)(RCC_BASE + 0x18);

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

//Timer1
uint32_t *TIM1_CR1 =(uint32_t*)0x40012C00;
uint32_t *TIM1_CR2 =(uint32_t*)0x40012C04;
uint32_t *TIM1_SMCR =(uint32_t*)0x40012C08;
uint32_t *TIM1_DIER =(uint32_t*)0x40012C0C;
uint32_t *TIM1_SR =(uint32_t*)0x40012C10;
uint32_t *TIM1_EGR =(uint32_t*)0x40012C14;
uint32_t *TIM1_CCMR1 =(uint32_t*)0x40012C18;
uint32_t *TIM1_CCMR2 =(uint32_t*)0x40012C1C;
uint32_t *TIM1_CCER =(uint32_t*)0x40012C20;
uint32_t *TIM1_CNT =(uint32_t*)0x40012C24;
uint32_t *TIM1_PSC =(uint32_t*)0x40012C28;
uint32_t *TIM1_ARR =(uint32_t*)0x40012C2C;
uint32_t *TIM1_RCR =(uint32_t*)0x40012C30;
uint32_t *TIM1_CCR1 =(uint32_t*)0x40012C34;
uint32_t *TIM1_CCR2 =(uint32_t*)0x40012C38;
uint32_t *TIM1_CCR3 =(uint32_t*)0x40012C3C;
uint32_t *TIM1_CCR4 =(uint32_t*)0x40012C40;
uint32_t *TIM1_BDTR =(uint32_t*)0x40012C44;
uint32_t *TIM1_DCR =(uint32_t*)0x40012C48;
uint32_t *TIM1_DMAR =(uint32_t*)0x40012C4C;

// Serial Peripheral Interface
uint32_t *SPI_CR1 =(uint32_t*)0x40013000;
uint32_t *SPI_CR2 =(uint32_t*)0x40013004;
uint32_t *SPI_SR =(uint32_t*)0x40013008;
uint32_t *SPI_DR =(uint32_t*)0x4001300C;
uint32_t *SPI_CRCP =(uint32_t*)0x40013010;
uint32_t *SPI_RXCRCR =(uint32_t*)0x40013014;
uint32_t *SPI_TXCRCR =(uint32_t*)0x40013018;


void enablePeripheral(uint8_t p)
{

}

void enableIRQ(uint32_t irq)
{

}


