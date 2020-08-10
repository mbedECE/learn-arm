
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
#include "timers.h"

/**
	\file main.h
	\brief This header file contains all the function declarations for main
	\author Mark R. Jennings <mbedece@gmail.com>
	\date Auguts 8, 2020
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
	\brief Timer 1 confoguration. 
	This function configures timer 1 to count down from 75 ms in order to debouce the push button
	
	\see TIM1_UP_Handler()
	\see EXTI9_5_Handler()
	\callergraph
*/
void configureTimer1(void);

#endif
