#ifndef __STM32F10XX_H
#define __STM32F10XX_H


#define RCC_APB2ENR_IOPAEN  2
#define RCC_APB2ENR_TIM1EN 11
#define TIM1_DIER_UIE 0
#define TIM1_EGR_UG 0

#define TIM1_CR1_ARPE 7
#define TIM1_CR1_DIR 4
#define TIM1_CR1_URS 2
#define TIM1_CR1_UDIS 1
#define TIM1_CR1_CEN  0

#define TIM1_UP_IRQ 25

#define GPIOx_ORD8 8


uint32_t *RCC_APB2ENR = (uint32_t*)0x40021018;
uint32_t *GPIOA_CRH =(uint32_t*)0x40010804;
uint32_t *GPIOA_ORD =(uint32_t*)0x4001080C;

uint32_t *TIM1_CR1 =(uint32_t*)0x40012C00;
uint32_t *TIM1_DIER =(uint32_t*)0x40012C0C;
uint32_t *TIM1_SR =(uint32_t*)0x40012C10;
uint32_t *TIM1_EGR =(uint32_t*)0x40012C14;

uint32_t *TIM1_CNT =(uint32_t*)0x40012C24;
uint32_t *TIM1_PSC =(uint32_t*)0x40012C28;
uint32_t *TIM1_ARR =(uint32_t*)0x40012C2C;
uint32_t *TIM1_RCR =(uint32_t*)0x40012C30;

uint32_t *NVIC_ISER0 =(uint32_t*)0xE000E100;

void initialize(void);
void startTimer1(uint16_t, uint16_t, uint32_t);
void configurePortA(void);
void enableClockTIM1(void);
void enableIRQ(uint8_t);

#endif
