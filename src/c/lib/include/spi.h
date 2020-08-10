/**
	\file rcc.h
	\brief This header file contains all the function declarations for the LCD module
	\author Mark R. Jennings <mbedece@gmail.com>
	\date Auguts 2, 2020
	\version 1.0
*/

#ifndef __SPI_H
#define __SPI_H

#include <stdint.h>
#include <stdbool.h>
#include "../include/rcc.h"

#define SPI1 0
#define SPI2 1

//Pin definitions
#define SPI_CR1_BIDIMODE 15
#define SPI_CR1_BIDIOE 14
#define SPI_CR1_CRXEN 13
#define SPI_CR1_CRCNEXT 12
#define SPI_CR1_DFF 11
#define SPI_CR1_RXONLY 10
#define SPI_CR1_SSM 9
#define SPI_CR1_SSI 8
#define SPI_CR1_LSBFIRST 7
#define SPI_CR1_SPE 6
#define SPI_CR1_BR 3
#define SPI_CR1_MSTR 2
#define SPI_CR1_CPOL 1
#define SPI_CR1_CPHA 0

#define SPI_CR2_TXEIE 7
#define SPI_CR2_RXNEIE 6
#define SPI_CR2_ERRIE 5
#define SPI_CR2_SSOE 2
#define SPI_CR2_TXDMAEN 1
#define SPI_CR2_RXDMAEN 0

#define SPI_SR_BSY 7
#define SPI_SR_OVR 6
#define SPI_SR_MODF 5
#define SPI_SR_CRCERR 4
#define SPI_SR_UDR 3
#define SPI_SR_CHSIDE  2
#define SPI_SR_TXE 1
#define SPI_SR_RXNE 0

// Registers
uint32_t *SPI1_CR1;
uint32_t *SPI1_CR2;
uint32_t *SPI1_SR;
uint32_t *SPI1_DR;
uint32_t *SPI1_CRCPR;
uint32_t *SPI1_RXCRCR;
uint32_t *SPI1_TXCRCR;

uint32_t *SPI2_CR1;
uint32_t *SPI2_CR2;
uint32_t *SPI2_SR;
uint32_t *SPI2_DR;
uint32_t *SPI2_CRCPR;
uint32_t *SPI2_RXCRCR;
uint32_t *SPI2_TXCRCR;

void enableSpiClk(void);
void enableSPI(uint32_t);
void disableSPI(uint32_t);
uint16_t spiTransfer(uint16_t, uint16_t);

void setBIDIMODE(uint32_t, bool);
void setBIDIOE(uint32_t, bool);
void setCRCEN(uint32_t, bool);
void setCRCNEXT(uint32_t, bool);
void setDFF(uint32_t, bool);
void setRXONLY(uint32_t, bool);
void setSSM(uint32_t, bool);
void setSSI(uint32_t, bool);
void setLSBFIRST(uint32_t, bool);
void setBR(uint32_t, uint32_t);
void setMSTR(uint32_t, bool);
void setCPOL(uint32_t, bool);
void setCPHA(uint32_t, bool);

bool getBIBIMODE(uint32_t);
bool getBIBIOE(uint32_t);
bool getCRCEN(uint32_t);
bool getCRCNEXT(uint32_t);
bool getDFF(uint32_t);
bool getRXONLY(uint32_t);
bool getSSM(uint32_t);
bool getSSI(uint32_t);
bool getLSBFIRST(uint32_t);
bool getSPE(uint32_t);
uint32_t getBR(uint32_t);
bool getMSTR(uint32_t);
bool getCPOL(uint32_t);
bool getCPHA(uint32_t);

void setTXEIE(uint32_t, bool);
void setRXNEIE(uint32_t, bool);
void setERRIE(uint32_t, bool);
void setSSOE(uint32_t, bool);
void setTXDMAEN(uint32_t, bool);
void setRXDMAEN(uint32_t, bool);

bool getTXEIE(uint32_t);
bool getRXNEIE(uint32_t);
bool getERRIE(uint32_t);
bool getSSOE(uint32_t);
bool getTXDMAEN(uint32_t);
bool getRXDMAEN(uint32_t);

void clearCRCERR(uint32_t);

bool getBSY(uint32_t);
bool getOVR(uint32_t);
bool getMODF(uint32_t);
bool getCRCERR(uint32_t);
bool getUDR(uint32_t);
bool getCHSIDE(uint32_t);
bool getTXE(uint32_t);
bool getRXNE(uint32_t);

uint16_t readSPICRCPR(uint32_t);
void writeSPICRCPR(uint32_t, uint16_t);

uint16_t readSPIRXCRCR(uint32_t);
uint16_t readSPITXCRCR(uint32_t);

#endif
