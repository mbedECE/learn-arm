#ifndef __GPIO_H
#define __GPIO_H

#include <stdint.h>
#include <stdbool.h>

//GPIO
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3
#define PORTE 4

#define GPIO_PIN0 0
#define GPIO_PIN1 1
#define GPIO_PIN2 2
#define GPIO_PIN3 3
#define GPIO_PIN4 4
#define GPIO_PIN5 5
#define GPIO_PIN6 6
#define GPIO_PIN7 7
#define GPIO_PIN8 8
#define GPIO_PIN9 9
#define GPIO_PIN10 10
#define GPIO_PIN11 11
#define GPIO_PIN12 12
#define GPIO_PIN13 13
#define GPIO_PIN14 14
#define GPIO_PIN15 15

#define HIGH 1
#define LOW 0

#define MODE_INPUT 0
#define MODE_OUTPUT_10MHz 1
#define MODE_OUTPUT_2MHz 2
#define MODE_OUTPUT_50MHz 3

#define CNF_MODE_INPUT_ANALOG 0
#define CNF_MODE_INPUT_FLOAT 1
#define CNF_MODE_INPUT_PULL_UP_DN 2

#define CNF_MODE_OUTPUT_GP_PP 0
#define CNF_MODE_OUTPUT_GP_OD 1
#define CNF_MODE_OUTPUT_AF_PP 2
#define CNF_MODE_OUTPUT_AF_OD 3


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
/**
	\file gpio.h
	\brief This header file contains all the function declarations for the GPIO module
	\author Mark R. Jennings <mbedece@gmail.com>
	\date Auguts 2, 2020
	\version 1.1
*/

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

void configurePortPin(uint32_t, uint32_t, uint32_t, uint32_t);
void pinState(uint32_t, uint32_t, uint32_t);
void toggle(uint32_t, uint32_t);


/**
	\brief Gets the state of an IO pin
	This function return a boolean value indicating the current dtate of an IO pin
	\param port The port being read
	\param pin The IO pin under observation 
	\callgraph
	\callergraph	
*/
bool getPinState(uint32_t port, uint32_t pin);


#endif
