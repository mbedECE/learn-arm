
#ifndef _MAIN_H
#define _MAIN_H

#include <stdint.h>

#include "jlx12864g-086.h"
#include "flash.h"
#include "rcc.h"
#include "spi.h"
#include "gpio.h"
#include "delay.h"
#include "exti.h"
#include "nvic.h"
#include "afio.h"
#include "timers.h"

#define INPUT 0
#define OUTPUT 1

/**
	\file main.h
	\brief This header file contains all the function declarations for main
	\author Mark R. Jennings <mbedece@gmail.com>
	\date Auguts 2, 2020
	\version 1.0
*/


/**
	System clock setting. 
	This macro is the default setting for the MCU system clock. This is the max value allowed for the STM32f103c8t6.
*/
#define SYS_CLK 72	//MHz

/**
	System initialization. 
	This function perform **all** initialization tasks such as the configuration of the system clock, enabling peripheral
	clocks, enabling peripherals, etc.

	\note The system clcok at this time can only be configured for two speeds
	<ul>
		<li> 8 MHz </li>
		<li> 72 MHz </li>
	</ul>
	\attention To configure the system clock for 8 MHz simply change the value of SYS_CLK to 8 and do not call configureSystemClock
	\callgraph
	\callergraph
*/
void initialize(void);

/** 
	System clock confoguration. 
	This function configures the system clock to 72 MHz. APB2 clock = 72 MHz and APB1 clcok = 36 MHz. HSE clock is 8 MHz and prescaler = 9
	\callergraph
*/
void configureSystemClock(void);

/**
	Port pin configuration for AM2302. 
	This function the correct pin direction for PORTB pin zero. It also configure EXTI0 for rising and falling edge detection when the pin is configured a s an input
	\param direction specifies the pin direction (INPUT or OUTPUT)
	\callergraph
*/
void setupAM2302(uint8_t direction);

/**
	AM2302 configuration
	This function performs the initial configuration needed for the AM2302. 
	\callergraph
*/
void AM2302(void);

/**
	Read the AM2302 sensor
	This function performs a read of the AM2302 sensor and acuires the current temperature and humidity. 
	\param temperature the temperature read will be stored in this parameter
	\param humidity the humidy read will be stored in this parameter
	\attention The new values of temperature and humidity returned by the sensor will only be available after the function returns
	\callgraph
	\callergraph
*/
void readAM2302(uint16_t temperature, uint16_t humidity);

void configureTimer2(void);

void startTimer2(void);

uint32_t stopTimer2(void)




#endif
