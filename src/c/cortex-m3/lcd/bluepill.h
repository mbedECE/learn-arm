#ifndef __BLUEPILL_H
#define __BLUEPILL_H

#include <stdint.h>

#define RCC_BASE 0x40021000

#define RCC_APB2ENR_IOPAEN  2
#define RCC_APB2ENR_TIM1EN 11

//TIMERS
#define TIM2_BASE 0x40000000
#define TIM3_BASE 0x40000400
#define TIM4_BASE 0x40000800

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

//TIMER1
#define TIM1_DIER_UIE 0
#define TIM1_EGR_UG 0
#define TIM1_CR1_ARPE 7
#define TIM1_CR1_DIR 4
#define TIM1_CR1_URS 2
#define TIM1_CR1_UDIS 1
#define TIM1_CR1_CEN  0

//SPI
#define BIDIMODE 15
#define BIDIOE 14
#define CRXEN 13
#define CRCNEXT 12
#define DFF 11
#define RXONLY 10
#define SSM 9
#define SSI 8
#define LSBFIRST 7
#define SPE 6
#define BR2 5
#define BR1 4
#define BRO 3
#define MSTR 2
#define CPOL 1
#define CPHA 0

#define TXEIE 7
#define RXNEIE 6
#define ERRIE 5
#define SSOE 2
#define TXDMAEN 1
#define RXDMAEN 0

#define BSY 7
#define OVR 6
#define MODF 5
#define CRCERR 4
#define UDR 3
#define CHSIDE  2
#define TXE 1
#define RXNE 0

//APB memory space
#define CRC 0 
#define FLASH 1
#define RCC 2
#define DMA 3
#define USART1 4
#define SPI1 5
#define TIM1 6
#define ADC2 7
#define ADC1 8
#define PORTE 9
#define PORTD 10
#define PORTC 11
#define PORTB 12
#define PORTA 13
#define EXTI 14
#define AFIO 15
#define PWR 16
#define BKP 17
#define bxCAN 18
#define I2C2 19
#define I2C1 20
#define USART3 21
#define USART2 22
#define SPI2 23
#define IWDG 24
#define WWDG 25
#define RTC 26
#define TIM4 27
#define TIM3 28
#define TIM2 29

#define TIM1_UP_IRQ 25

uint32_t *NVIC_ISER0;
uint32_t *NVIC_ISER1;

//RCC
uint32_t *RCC_APB2ENR;

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

//Timer1
uint32_t *TIM1_CR1;
uint32_t *TIM1_CR2;
uint32_t *TIM1_SMCR;
uint32_t *TIM1_DIER;
uint32_t *TIM1_SR;
uint32_t *TIM1_EGR;
uint32_t *TIM1_CCMR1;
uint32_t *TIM1_CCMR2;
uint32_t *TIM1_CCER;
uint32_t *TIM1_CNT;
uint32_t *TIM1_PSC;
uint32_t *TIM1_ARR;
uint32_t *TIM1_RCR;
uint32_t *TIM1_CCR1;
uint32_t *TIM1_CCR2;
uint32_t *TIM1_CCR3;
uint32_t *TIM1_CCR4;
uint32_t *TIM1_BDTR;
uint32_t *TIM1_DCR;
uint32_t *TIM1_DMAR;

// Serial Peripheral Interface
uint32_t *SPI_CR1;
uint32_t *SPI_CR2;
uint32_t *SPI_SR;
uint32_t *SPI_DR;
uint32_t *SPI_CRCP;
uint32_t *SPI_RXCRCR;
uint32_t *SPI_TXCRCR;
uint32_t *SPI_TXCRCR;

void enablePeripheral(uint8_t);
void enableIRQ(uint32_t);

#endif
