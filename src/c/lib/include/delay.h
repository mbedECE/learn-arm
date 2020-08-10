/**
	\file delay.h
	\brief This header file contains all the function declarations for the LCD module
	\author Mark R. Jennings <mbedece@gmail.com>
	\date Auguts 2, 2020
	\version 1.0
*/


#ifndef _DELAY_H
#define _DELAY_H

#include "systick.h"
#include <stdint.h>
#include <stdbool.h>

uint32_t SYS_CLK; /**< variable to store value of system clock */

/**
	\brief Deley configuratio.
	configures the delays to operate based on the value of the system clcok setting
	\param sys_clk The value of the system clock setting
	\note The default value of the system clock setting is 72 MHz
	\see main.h
	\callgraph
	\callergraph
*/
void delays_init(uint32_t sys_clk);

void wait(uint32_t);
void delay_ms(uint32_t);
void delay_us(uint32_t);
#endif
