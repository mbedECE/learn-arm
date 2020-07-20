#ifndef __SPI_H
#define __SPI_H

#include <stdint.h>

//GPIO
#define GPIO_BASE 0x40010000
#define PORTA_BASE ((GPIO_BASE) + (0x800))
#define PORTB_BASE ((GPIO_BASE) + (0xC00))
#define PORTC_BASE ((GPIO_BASE) + (0x1000))
#define PORTD_BASE ((GPIO_BASE) + (0x1400))
#define PORTE_BASE ((GPIO_BASE) + (0x1800))

#define GPIOx_ORD0 0
#define GPIOx_ORD1 1
#define GPIOx_ORD2 2
#define GPIOx_ORD3 3
#define GPIOx_ORD4 4
#define GPIOx_ORD5 5
#define GPIOx_ORD6 6
#define GPIOx_ORD7 7
#define GPIOx_ORD8 8
#define GPIOx_ORD9 9
#define GPIOx_ORD10 10
#define GPIOx_ORD11 11
#define GPIOx_ORD12 12
#define GPIOx_ORD13 13
#define GPIOx_ORD14 14
#define GPIOx_ORD15 15

//PORTA
uint32_t *GPIOA_CRL;
uint32_t *GPIOA_CRH;
uint32_t *GPIOA_IDR;
uint32_t *GPIOA_ORD;
uint32_t *GPIOA_BSRR;
uint32_t *GPIOA_BRR;
uint32_t *GPIOA_LCKR;

//PORTB
uint32_t *GPIOB_CRL;
uint32_t *GPIOB_CRH;
uint32_t *GPIOB_IDR;
uint32_t *GPIOB_ORD;
uint32_t *GPIOB_BSRR;
uint32_t *GPIOB_BRR;
uint32_t *GPIOB_LCKR;

//PORTC
uint32_t *GPIOC_CRL;
uint32_t *GPIOC_CRH;
uint32_t *GPIOC_IDR;
uint32_t *GPIOC_ORD;
uint32_t *GPIOC_BSRR;
uint32_t *GPIOC_BRR;
uint32_t *GPIOC_LCKR;

//PORTD
uint32_t *GPIOD_CRL;
uint32_t *GPIOD_CRH;
uint32_t *GPIOD_IDR;
uint32_t *GPIOD_ORD;
uint32_t *GPIOD_BSRR;
uint32_t *GPIOD_BRR;
uint32_t *GPIOD_LCKR;

//PORTE
uint32_t *GPIOE_CRL;
uint32_t *GPIOE_CRH;
uint32_t *GPIOE_IDR;
uint32_t *GPIOE_ORD;
uint32_t *GPIOE_BSRR;
uint32_t *GPIOE_BRR;
uint32_t *GPIOE_LCKR;


#endif
