/**
	\file rcc.h
	\brief This header file contains all the function declarations for the LCD module
	\author Mark R. Jennings <mbedece@gmail.com>
	\date Auguts 2, 2020
	\version 1.0
*/

#ifndef _RCC_H
#define _RCC_H

#include <stdint.h>
#include <stdbool.h>

#define RCC_BASE 0x40021000

#define RCC_APB1ENR_TIM2EN 0
#define RCC_APB1ENR_TIM3EN 3
#define RCC_APB1ENR_TIM4EN 4
#define RCC_APB1ENR_WWDGEN 11
#define RCC_APB1ENR_SPI2EN 14
#define RCC_APB1ENR_USART2EN 17
#define RCC_APB1ENR_USART3EN 18
#define RCC_APB1ENR_I2C1EN 21
#define RCC_APB1ENR_I2C2EN 22

#define RCC_APB2ENR_AFIOEN  32
#define RCC_APB2ENR_IOPAEN  34
#define RCC_APB2ENR_IOPBEN  35
#define RCC_APB2ENR_IOPCEN  36
#define RCC_APB2ENR_IOPDEN  37
#define RCC_APB2ENR_IOPEEN  38
#define RCC_APB2ENR_TIM1EN 43
#define RCC_APB2ENR_SPI1EN 44
#define RCC_APB2ENR_USART1EN 46

#define RCC_CR_PLLRDY 25
#define RCC_CR_PLLON 24
#define RCC_CR_CSSON 19
#define RCC_CR_HSEBYP 18
#define RCC_CR_HSERDY 17
#define RCC_CR_HSEON 16
#define RCC_CR_HSIRDY 1
#define RCC_CR_HSION 0

#define RCC_CFGR_USBPRE 22
#define RCC_CFGR_PLLMUL 18
#define RCC_CFGR_PLLXTPRE 17
#define RCC_CFGR_PLLSRC 16
#define RCC_CFGR_PPRE2 11
#define RCC_CFGR_PPRE1 8
#define RCC_CFGR_HPRE 4
#define RCC_CFGR_SWS 2
#define RCC_CFGR_SW 0

#define USB_PLL_DIVx1_5 0
#define USB_PLL_DIVx1 1

#define RCC_CFGR_PLLMULx2 0	
#define RCC_CFGR_PLLMULx3 1
#define RCC_CFGR_PLLMULx4 2
#define RCC_CFGR_PLLMULx5 3
#define RCC_CFGR_PLLMULx6 4
#define RCC_CFGR_PLLMULx7 5
#define RCC_CFGR_PLLMULx8 6
#define RCC_CFGR_PLLMULx9 7
#define RCC_CFGR_PLLMULx10 8
#define RCC_CFGR_PLLMULx11 9
#define RCC_CFGR_PLLMULx12 10
#define RCC_CFGR_PLLMULx13 11
#define RCC_CFGR_PLLMULx14 12
#define RCC_CFGR_PLLMULx15 13
#define RCC_CFGR_PLLMULx16 14

#define RCC_CFGR_SW_HS1 0
#define RCC_CFGR_SW_HSE 1
#define RCC_CFGR_SW_PLL 2

#define RCC_CFGR_SYSCLK_DIVx1 0
#define RCC_CFGR_SYSCLK_DIVx2 8
#define RCC_CFGR_SYSCLK_DIVx4 9
#define RCC_CFGR_SYSCLK_DIVx8 10
#define RCC_CFGR_SYSCLK_DIVx16 11
#define RCC_CFGR_SYSCLK_DIVx64 12
#define RCC_CFGR_SYSCLK_DIVx128 13
#define RCC_CFGR_SYSCLK_DIVx256 14
#define RCC_CFGR_SYSCLK_DIVx512 15

#define RCC_CFGR_HCLK_DIVx1 0
#define RCC_CFGR_HCLK_DIVx2 4
#define RCC_CFGR_HCLK_DIVx4 5
#define RCC_CFGR_HCLK_DIVx8 6
#define RCC_CFGR_HCLK_DIVx16 7

//RCC
uint32_t *RCC_CR;
uint32_t *RCC_CFGR;
uint32_t *RCC_APB2ENR;
uint32_t *RCC_APB1ENR;

void enablePeripheralClock(uint32_t);

bool isHSIRDY(void);
void enableHSE(void);
void disableHSE(void);
void enableHSI(void);
void disableHSI(void);
bool isHSERDY(void);
void enableCSS(void);
void disableCSS(void);
void enablePLL(void);
void disablePLL(void);
bool isPLLRDY(void);

void setSW(uint32_t);
uint32_t getSWS(void);
void setAHB_PSC(uint32_t);
void setAPB1_PSC(uint32_t);
void setAPB2_PSC(uint32_t);
void setPLLSRC(void);
void clearPLLSRC(void);
void setPLLXTPRE(void);
void clearPLLXTPRE(void);
void setPLLMULL(uint32_t);
void setUSBPRE(uint32_t);
#endif
