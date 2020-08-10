#include "../include/jlx12864g-086.h"

/**
	\dir source
	\brief The source directory for library files.
	
	This directory contains all the sourtce files for thus library
*/

static uint8_t dummy[] __attribute__((section(".ascii"))) = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
static uint8_t exclamation[] __attribute__((section(".ascii"))) = {0x00, 0x00, 0x00, 0x4F, 0x00, 0x00, 0x00, 0x00}; 
static uint8_t percentage[] __attribute__((section(".ascii"))) = {0x00, 0x23, 0x13, 0x08, 0x64, 0x62, 0x00, 0x00}; 
static uint8_t question[] __attribute__((section(".ascii"))) = {0x00, 0x02, 0x01, 0x51, 0x09, 0x06, 0x00, 0x00}; 
static uint8_t colon[] __attribute__((section(".ascii"))) = {0x00, 0x00, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00}; 
static uint8_t equal[] __attribute__((section(".ascii"))) = {0x00, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00, 0x00}; 
static uint8_t minus[] __attribute__((section(".ascii"))) = {0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00}; 
static uint8_t plus[] __attribute__((section(".ascii"))) = {0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00, 0x00}; 
static uint8_t deg[] __attribute__((section(".ascii"))) = {0x00, 0x07, 0x05, 0x07, 0x00, 0x00, 0x00, 0x00}; 
static uint8_t space[] __attribute__((section(".ascii"))) = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; 
static uint8_t period[] __attribute__((section(".ascii"))) = {0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00};

static uint8_t zero[] __attribute__((section(".ascii"))) = {0x00, 0x3E, 0x41, 0x41, 0x41, 0x3e, 0x00, 0x00};
static uint8_t one[] __attribute__((section(".ascii"))) = {0x00, 0x44, 0x42, 0x7F, 0x40, 0x40, 0x00, 0x00}; 
static uint8_t two[] __attribute__((section(".ascii"))) = {0x00, 0x42, 0x61, 0x51, 0x49, 0x46, 0x00, 0x00};
static uint8_t three[] __attribute__((section(".ascii"))) = {0x00, 0x21, 0x41, 0x45, 0x4B, 0x31, 0x00, 0x00};
static uint8_t four[] __attribute__((section(".ascii"))) = {0x00, 0x18, 0x14, 0x12, 0x7F, 0x10, 0x00, 0x00};
static uint8_t five[] __attribute__((section(".ascii"))) = {0x00, 0x27, 0x45, 0x45, 0x45, 0x39, 0x00, 0x00};
static uint8_t six[] __attribute__((section(".ascii"))) = {0x00, 0x2C, 0x4A, 0x49, 0x49, 0x30, 0x00, 0x00};
static uint8_t seven[] __attribute__((section(".ascii"))) = {0x00, 0x03, 0x01, 0x71, 0x09, 0x07, 0x00, 0x00};
static uint8_t eight[] __attribute__((section(".ascii"))) = {0x00, 0x36, 0x49, 0x49, 0x49, 0x36, 0x00, 0x00};
static uint8_t nine[] __attribute__((section(".ascii"))) = {0x00, 0x06, 0x49, 0x49, 0x29, 0x1E, 0x00, 0x00};

static uint8_t A[] __attribute__((section(".ascii"))) = {0x00, 0x3C, 0x12, 0x11, 0x12, 0x3C, 0x00, 0x00};
static uint8_t B[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x49, 0x49, 0x49, 0x36, 0x00, 0x00};
static uint8_t C[] __attribute__((section(".ascii"))) = {0x00, 0x3E, 0x41, 0x41, 0x41, 0x22, 0x00, 0x00};
static uint8_t D[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C, 0x00, 0x00};
static uint8_t E[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x00, 0x00};
static uint8_t F[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x09, 0x09, 0x09, 0x01, 0x00, 0x00};
static uint8_t G[] __attribute__((section(".ascii"))) = {0x00, 0x3F, 0x41, 0x49, 0x49, 0x72, 0x00, 0x00};
static uint8_t H[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00, 0x00};
static uint8_t I[] __attribute__((section(".ascii"))) = {0x00, 0x00, 0x41, 0x7F, 0x41, 0x00, 0x00, 0x00};
static uint8_t J[] __attribute__((section(".ascii"))) = {0x00, 0x20, 0x40, 0x41, 0x3F, 0x01, 0x00, 0x00};
static uint8_t K[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x08, 0x14, 0x22, 0x41, 0x00, 0x00};
static uint8_t L[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00};
static uint8_t M[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F, 0x00, 0x00};
static uint8_t N[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x04, 0x08, 0x02, 0x7F, 0x00, 0x00};
static uint8_t O[] __attribute__((section(".ascii"))) = {0x00, 0x3F, 0x41, 0x41, 0x41, 0x3F, 0x00, 0x00};
static uint8_t P[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x09, 0x09, 0x09, 0x06, 0x00, 0x00};
static uint8_t Q[] __attribute__((section(".ascii"))) = {0x00, 0x3F, 0x41, 0x51, 0x21, 0x5E, 0x00, 0x00};
static uint8_t R[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x09, 0x19, 0x29, 0x46, 0x00, 0x00};
static uint8_t S[] __attribute__((section(".ascii"))) = {0x00, 0x26, 0x49, 0x49, 0x49, 0x32, 0x00, 0x00};
static uint8_t T[] __attribute__((section(".ascii"))) = {0x00, 0x01, 0x01, 0x7F, 0x01, 0x01, 0x00, 0x00}; 
static uint8_t U[] __attribute__((section(".ascii"))) = {0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00, 0x00};
static uint8_t V[] __attribute__((section(".ascii"))) = {0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00, 0x00};
static uint8_t W[] __attribute__((section(".ascii"))) = {0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F, 0x00, 0x00};
static uint8_t X[] __attribute__((section(".ascii"))) = {0x00, 0x63, 0x14, 0x08, 0x14, 0x63, 0x00, 0x00};
static uint8_t Y[] __attribute__((section(".ascii"))) = {0x00, 0x07, 0x08, 0x70, 0x08, 0x07, 0x00, 0x00};
static uint8_t Z[] __attribute__((section(".ascii"))) = {0x00, 0x61, 0x51, 0x49, 0x45, 0x43, 0x00, 0x00};

static uint8_t a[] __attribute__((section(".ascii"))) = {0x00, 0x10, 0x54, 0x54, 0x54, 0x78, 0x00, 0x00};
static uint8_t b[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x48, 0x44, 0x44, 0x38, 0x00, 0x00};
static uint8_t c[] __attribute__((section(".ascii"))) = {0x00, 0x38, 0x44, 0x44, 0x44, 0x20, 0x00, 0x00};
static uint8_t d[] __attribute__((section(".ascii"))) = {0x00, 0x38, 0x44, 0x44, 0x48, 0x7F, 0x00, 0x00};
static uint8_t e[] __attribute__((section(".ascii"))) = {0x00, 0x38, 0x54, 0x54, 0x54, 0x18, 0x00, 0x00};
static uint8_t f[] __attribute__((section(".ascii"))) = {0x00, 0x08, 0x7E, 0x09, 0x01, 0x02, 0x00, 0x00};
static uint8_t g[] __attribute__((section(".ascii"))) = {0x00, 0x0C, 0x52, 0x52, 0x52, 0x3E, 0x00, 0x00};
static uint8_t h[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x08, 0x04, 0x04, 0x78, 0x00, 0x00};
static uint8_t i[] __attribute__((section(".ascii"))) = {0x00, 0x00, 0x44, 0x7D, 0x40, 0x00, 0x00, 0x00};
static uint8_t j[] __attribute__((section(".ascii"))) = {0x00, 0x20, 0x40, 0x44, 0x34, 0x00, 0x00, 0x00};
static uint8_t k[] __attribute__((section(".ascii"))) = {0x00, 0x7F, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00};
static uint8_t l[] __attribute__((section(".ascii"))) = {0x00, 0x00, 0x41, 0x7F, 0x40, 0x00, 0x00, 0x00};
static uint8_t m[] __attribute__((section(".ascii"))) = {0x00, 0x7C, 0x04, 0x18, 0x04, 0x78, 0x00, 0x00};
static uint8_t n[] __attribute__((section(".ascii"))) = {0x00, 0x7C, 0x08, 0x04, 0x04, 0x78, 0x00, 0x00};
static uint8_t o[] __attribute__((section(".ascii"))) = {0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00};
static uint8_t p[] __attribute__((section(".ascii"))) = {0x00, 0x7C, 0x14, 0x14, 0x14, 0x08, 0x00, 0x00};
static uint8_t q[] __attribute__((section(".ascii"))) = {0x00, 0x08, 0x14, 0x14, 0x18, 0x7C, 0x00, 0x00};
static uint8_t r[] __attribute__((section(".ascii"))) = {0x00, 0x7C, 0x08, 0x04, 0x04, 0x08, 0x00, 0x00};
static uint8_t s[] __attribute__((section(".ascii"))) = {0x00, 0x48, 0x54, 0x54, 0x54, 0x20, 0x00, 0x00};
static uint8_t t[] __attribute__((section(".ascii"))) = {0x00, 0x04, 0x3F, 0x44, 0x40, 0x20, 0x00, 0x00};
static uint8_t u[] __attribute__((section(".ascii"))) = {0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C, 0x00, 0x00};
static uint8_t v[] __attribute__((section(".ascii"))) = {0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00, 0x00};
static uint8_t w[] __attribute__((section(".ascii"))) = {0x00, 0x3C, 0x40, 0x38, 0x40, 0x3C, 0x00, 0x00};
static uint8_t x[] __attribute__((section(".ascii"))) = {0x00, 0x44, 0x28, 0x10, 0x28, 0x44, 0x00, 0x00};
static uint8_t y[] __attribute__((section(".ascii"))) = {0x00, 0x0C, 0x50, 0x50, 0x50, 0x3C, 0x00, 0x00};
static uint8_t z[] __attribute__((section(".ascii"))) = {0x00, 0x44, 0x64, 0x54, 0x4C, 0x44, 0x00, 0x00}; 


static uint8_t *ascii_table [] __attribute__((section(".ascii"))) = {
	dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, 
	dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy, dummy,  
	space, exclamation, dummy, dummy, dummy, percentage, dummy, dummy, dummy, dummy, dummy, plus, dummy, minus, period, dummy,
	zero, one, two, three, four, five, six, seven, eight, nine, colon, dummy, dummy, equal, dummy, question,
	dummy, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, 
	P, Q, R, S, T, U, V, W, X, Y, Z, dummy, dummy, dummy, dummy, dummy, 
	dummy, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, 
	p, q, r, s, t, u, v, w, x, y, z, dummy, dummy, dummy, dummy, deg
}; 

static uint32_t SPI = 0;	
static uint32_t PORT = 0;
static uint32_t MOSI = 0;
static uint32_t SCK = 0;
static uint32_t NSS = 0;
static uint32_t RS = 0;
static uint32_t RST = 0;
static uint32_t LEDA = 0;
static uint32_t CLK = 0;

static uint32_t ROW = 0;	//page
static uint32_t COL = 0; 	

static void print(uint8_t ascii, uint8_t col, uint8_t row)
{
	for(uint8_t i=0; i<8; i++)
	{
		setCursor(col+i, row);
		sendData(ascii_table[ascii][i]);
	}
	
	setCursor(col+8, row);
}

void println(char* line)
{
	while(*line != '\0')
	{	
		if(ROW > 7)
			ROW = 0;			
		
		if(COL > 127)
		{
			COL = 0;
			ROW++;	
		}
		
		COL -= (COL & 0x7);	
	
		print((uint8_t)(*line), COL, ROW);
		line += 1;		
	}
}

void lcdInit(uint32_t module, uint32_t port, uint32_t mosi, uint32_t sck, uint32_t nss, uint32_t rs, uint32_t rst, uint32_t leda, uint32_t sysclk)
{
	SPI = module;
	PORT = port;
	MOSI = mosi;
	SCK = sck;
	NSS = nss;
	RS = rs;
	RST = rst;
	LEDA = leda;
	CLK = sysclk;
	
	ROW = 0;
	COL = 0;

	delays_init(CLK);
	
	//Enable the SPI peripheral clock
	enableSpiClk();
	
	if(PORT == PORTA)
		enablePeripheralClock(RCC_APB2ENR_IOPAEN);
	
	if(PORT == PORTB)
		enablePeripheralClock(RCC_APB2ENR_IOPBEN);
		
	configurePortPin(PORT, MOSI, CNF_MODE_OUTPUT_AF_PP, MODE_OUTPUT_50MHz);	//MOSI
	configurePortPin(PORT, SCK, CNF_MODE_OUTPUT_AF_PP, MODE_OUTPUT_50MHz);	//SCK
	configurePortPin(PORT, NSS, CNF_MODE_OUTPUT_AF_PP, MODE_OUTPUT_50MHz);	//NSS
	
	configurePortPin(PORT, RS, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_50MHz);	//RS
	configurePortPin(PORT, RST, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_50MHz);	//RESET
	configurePortPin(PORT, LEDA, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_2MHz);	//LEDA
	
	//Configure the MCU as SPI master
	setBIDIMODE(SPI, false);	//2-line unidirectional data mode selected
	setRXONLY(SPI, false);		//Full duplex (Transmit and receive)
	setBR(SPI, 0x7);		//set the baud rate = PCLK/256
	setCPOL(SPI,false);		//set the polarity = 0
	setCPHA(SPI, false);		//set the phase = 0
	setDFF(SPI, false);		//8-bit format
	setLSBFIRST(SPI, false);	//MSB sent first
	setSSM(SPI, false);		//Disable software slave management
	setSSOE(SPI, true);		//SS output is enabled
	setMSTR(SPI, true);		//master mode
	
	pinState(PORT, LEDA, HIGH);	//backlight on
		
	//start the lcd initialization procedure
	pinState(PORT, RST, LOW);
	delay_ms(2);
	pinState(PORT, RST, HIGH);
	delay_ms(10);

 	sendCMD(0xE2); // Soft Reset
 	sendCMD(0x40); // set LCD start line to 0
	sendCMD(0x2C); // Boost 1
	sendCMD(0x2E); // Boost 2
	sendCMD(0x2F); // Boost 3
	sendCMD(0x23); // Coarse Contrast, setting range is from 20 to 27
	sendCMD(0xC0); // Line scan sequence : from top to bottom	
	sendCMD(0xA0); // Column scanning order : from left to right

	
	delay_ms(125);
	
	sendCMD(0xA2); // 1/9 bias ratio (1/7 bias ratio [0xA3])
	sendCMD(0x81); // Trim Contrast
	sendCMD(0x28); // Trim Contrast value range can be set from 0 to 63	
	sendCMD(0xAF); //enable display	
	
	clearScreen();		
}


void clearScreen(void)
{
	for(uint8_t i=0; i<8; i++) 
	{		
		for(uint8_t j=0; j<132; j++) 
		{	
			setCursor(j, i);
			sendData(0x00);
		}
	}

	COL = 0;
	ROW = 0;
		
	setCursor(COL, ROW);
}


void sendCMD(uint16_t cmd)
{
	enableSPI(SPI);
	pinState(PORT, RS, LOW);	

	while(!getTXE(SPI));		//wait for TXE bit to go high i.e TX buffer empty
	spiTransfer(SPI, cmd);
	disableSPI(SPI);
}

void sendData(uint16_t data)
{
	enableSPI(SPI);
	pinState(PORT, RS, HIGH);	

	while(!getTXE(SPI));		//wait for TXE bit to go high i.e TX buffer empty
	spiTransfer(SPI, data);
	disableSPI(SPI);
}

void setDisplayState(uint16_t state)
{
	sendCMD(state);
}

void setCursor(uint32_t x, uint32_t y)
{ 
	COL = x;
	ROW = y;
	
	x = 131 - x;
	
	sendCMD(0xB0+y);
	sendCMD(0x10+(x/16));
	sendCMD(0x00+(x%16));
}

