/**
	\file jlx12864g-086.h
	\brief This header file contains all the function declarations for the LCD module
	\author Mark R. Jennings <mbedece@gmail.com>
	\date Auguts 2, 2020
	\version 1.0
*/

/**
	\dir include
	\brief The include directory for library files.
	
	This directory contains all the headers files for the .c files located in the source folder
*/

#ifndef __JLX12864G_086_H
#define __JLX12864G_086_H

#include <stdint.h>
#include <stdbool.h>

#include "spi.h"
#include "delay.h"
#include "gpio.h"

#define DISPLY_STATE_ON 0xAF
#define DISPLY_STATE_OFF 0xAE

/**
	Print line. 
	This function prints a line of characters to the LCD screen
	\param line The string of characters to be displyed on he LCD
	\callgraph
	\callergraph
*/
void println(char* line);

/**
	LCD initialization and setup. 
	This function performs LCD initalization and configuration
	\param module  The selected SPI module (either SPI1 or SPI2)
	\param port	The GPIO port for the SPI pins (either PORTA or PORTB) 
	\param mosi	The port pin for MOSI
	\param sck	The port pin for SPI clock
	\param nss	The port pin for the slave select
	\param rs	The port pin for the RS input on the LCD module
	\param rst	The port pin for LCD reset 
	\param leda 	The port pin for the LCD backlight
	\param sysclk	The value of the system clock in MHz
	\callgraph
	\callergraph
*/
void lcdInit(uint32_t module, uint32_t port, uint32_t mosi, uint32_t sck, uint32_t nss, uint32_t rs, uint32_t rst, uint32_t leda, uint32_t sysclk);

/**
	Send a command byte to the LCD
	This function sends a configuration command to the LCD module
	\param cmd The command to be sent to the LCD
	\callgraph
	\callergraph
*/
void sendCMD(uint16_t cmd);

/**
	Sends a byte of data to LCD
	This function trabsfers a byte of data to the LCD via the serial interface
	\param data The byte of data to be sent
	\callgraph
	\callergraph
*/
void sendData(uint16_t data);

/**
	Sets the display state. 
	This function enables or disables the LCD display based on the argument passed to it
	\param state	The command value to enable/disable the LCD module 
	\callgraph
	\callergraph
*/
void setDisplayState(uint16_t state);

/**
	Set the cursor position. 
	This function takes as arguments the desired coordinates of the cursor
	\param x	The column index
	\param y	The row index	
	\callgraph
	\callergraph
*/
void setCursor(uint32_t x, uint32_t y);

/**
	Clears the LCD screen. 
	This function clears all the pixels on the LCD screens.
	\callgraph
	\callergraph
*/
void clearScreen(void);

#endif
