#include "jlx12864g-086.h"

#include "delay.h"

void lcdInit(void)
{
	delays_init(72);
	
	//Enable the SPI peripheral clock
	enableSpiClk();
	enablePeripheralClock(RCC_APB2ENR_IOPAEN);
	
	configurePortPin(PORTA, GPIO_PIN7, CNF_MODE_OUTPUT_AF_PP, MODE_OUTPUT_50MHz);	//MOSI
	configurePortPin(PORTA, GPIO_PIN5, CNF_MODE_OUTPUT_AF_PP, MODE_OUTPUT_50MHz);	//SCK
	configurePortPin(PORTA, GPIO_PIN4, CNF_MODE_OUTPUT_AF_PP, MODE_OUTPUT_50MHz);	//NSS
	
	configurePortPin(PORTA, GPIO_PIN3, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_50MHz);	//RS
	configurePortPin(PORTA, GPIO_PIN2, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_50MHz);	//RESET
	configurePortPin(PORTA, GPIO_PIN1, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_2MHz);	//LEDA
	
	//Configure the MCU as SPI master
	setBIDIMODE(SPI1, false);	//2-line unidirectional data mode selected
	setRXONLY(SPI1, false);		//Full duplex (Transmit and receive)
	setBR(SPI1, 0x7);		//set the baud rate = PCLK/256
	setCPOL(SPI1,false);		//set the polarity = 0
	setCPHA(SPI1, false);		//set the phase = 0
	setDFF(SPI1, false);		//8-bit format
	setLSBFIRST(SPI1, false);	//MSB sent first
	setSSM(SPI1, false);		//Disable software slave management
	setSSOE(SPI1, true);		//SS output is enabled
	setMSTR(SPI1, true);		//master mode
	
	pinState(PORTA, GPIO_PIN1, HIGH);	//backlight on
		
	//start the lcd initialization procedure
	pinState(PORTA, GPIO_PIN2, LOW);
	delay_ms(2);
	pinState(PORTA, GPIO_PIN2, HIGH);
	delay_ms(10);

 	sendCMD(0xE2); // Soft Reset
 	sendCMD(0x40); // set LCD start line to 0
	sendCMD(0x2C); // Boost 1
	sendCMD(0x2E); // Boost 2
	sendCMD(0x2F); // Boost 3
	sendCMD(0xC8); // Line scan sequence : from top to bottom
	sendCMD(0xA0); // Column scanning order : from left to right
	
	delay_ms(150);
	
	sendCMD(0xA2); // 1/9 bias ratio (1/7 bias ratio [0xA3])
	
	sendCMD(0x23); // Coarse Contrast, setting range is from 20 to 27
	sendCMD(0x81); // Trim Contrast
	sendCMD(0x20); // Trim Contrast value range can be set from 0 to 63
	
	sendCMD(0xAF); //enable display	
	delay_ms(100);
	sendCMD(0xA5); //display all points
	delay_ms(200);
	sendCMD(0xA4); //normal display
	
	setDisplayState(DISPLY_STATE_ON); // Open the display	
	clearScreen();		
}


void clearScreen(void)
{
	for(uint8_t i=0; i<8; i++) 
	{		
		for(uint8_t j=0; j<128; j++) 
		{	
			setCursor(j, i);
			sendData(0x00);
		}
	}	
}


void sendCMD(uint16_t cmd)
{
	enableSPI(SPI1);
	pinState(PORTA, GPIO_PIN3, LOW);	

	while(!getTXE(SPI1));		//wait for TXE bit to go high i.e TX buffer empty
	spiTransfer(SPI1, cmd);
	disableSPI(SPI1);
}

void sendData(uint16_t data)
{
	enableSPI(SPI1);
	pinState(PORTA, GPIO_PIN3, HIGH);	

	while(!getTXE(SPI1));		//wait for TXE bit to go high i.e TX buffer empty
	spiTransfer(SPI1, data);
	disableSPI(SPI1);
}

void setDisplayState(uint16_t state)
{
	sendCMD(state);
}

void setCursor(uint32_t x, uint32_t y)
{ 
	// y with Page 0 - 8 
	// x = 0 - 127
	sendCMD(0xB0+y);
	sendCMD(0x10+(x/16));
	sendCMD(0x00+(x%16));
}




