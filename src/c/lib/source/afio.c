#include "../include/afio.h"

uint32_t *AFIO_EVCR = (uint32_t*)(AFIO_BASE + 0X00);
uint32_t *AFIO_MAPR = (uint32_t*)(AFIO_BASE + 0X04);
uint32_t *AFIO_EXTICR1 = (uint32_t*)(AFIO_BASE + 0X08);
uint32_t *AFIO_EXTICR2 = (uint32_t*)(AFIO_BASE + 0X0C);
uint32_t *AFIO_EXTICR3 = (uint32_t*)(AFIO_BASE + 0X10);
uint32_t *AFIO_EXTICR4 = (uint32_t*)(AFIO_BASE + 0X14);

void setEXTIxCFG(uint8_t src, uint32_t cfg)
{
	uint8_t reg = src/4;
	uint8_t exti = src & 3;
	 
	switch(reg)
	{
		case 0:
			*AFIO_EXTICR1 |= (cfg << (exti*4));			
			break;
			
		case 1:
			*AFIO_EXTICR2 |= (cfg << (exti*4));
			break;
			
		case 2:
			*AFIO_EXTICR3 |= (cfg << (exti*4));
			break;
			
		case 3: 
			*AFIO_EXTICR4 |= (cfg << (exti*4));
			break;
	}
}

uint8_t getEXTIxCFG(uint8_t src)
{
	uint8_t reg = src/4;
	uint8_t exti = src & 3;
	 
	switch(reg)
	{
		case 0:
			return ((*AFIO_EXTICR1 & (0x0F << (exti*4))) >> (exti*4));			
			break;
			
		case 1:
			return ((*AFIO_EXTICR1 & (0x0F << (exti*4))) >> (exti*4));
			break;
			
		case 2:
			return ((*AFIO_EXTICR1 & (0x0F << (exti*4))) >> (exti*4));
			break;
			
		case 3: 
			return ((*AFIO_EXTICR1 & (0x0F << (exti*4))) >> (exti*4));
			break;
		default:
			return 0;
			break;
	}
}

void setEVOE(bool state)
{
	if(state)
		*AFIO_EVCR |= (1 << AFIO_EVCR_EVOE);
	else
		*AFIO_EVCR &= ~(1 << AFIO_EVCR_EVOE);
}

void setADC2_ETRGREG_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_ADC2_ETRIGREG_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_ADC2_ETRIGREG_REMAP);
}

void setADC2_ETRGINJ_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_ADC2_ETRIGINJ_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_ADC2_ETRIGINJ_REMAP);
}

void setADC1_ETRGREG_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_ADC1_ETRIGREG_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_ADC1_ETRIGREG_REMAP);	
}

void setADC1_ETRGINJ_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_ADC1_ETRIGINJ_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_ADC1_ETRIGINJ_REMAP);
}

void setPDO1_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_PDO1_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_PDO1_REMAP);
}

void setTIM4_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_TIM4_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_TIM4_REMAP);
}

void setUSART2_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_USART2_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_USART2_REMAP);	
}

void setUSART1_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_USART1_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_USART1_REMAP);
}

void setI2C1_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_I2C1_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_I2C1_REMAP);
}

void setSPI1_REMAP(bool state)
{
	if(state)
		*AFIO_MAPR |= (1 << AFIO_MAPR_SPI_REMAP);
	else
		*AFIO_MAPR &= ~(1 << AFIO_MAPR_SPI_REMAP);
}



bool getEVOE(void)
{
	return (*AFIO_EVCR & (1 << AFIO_EVCR_EVOE));
}

bool getADC2_ETRGREG_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_ADC2_ETRIGREG_REMAP));
}

bool getADC2_ETRGINJ_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_ADC2_ETRIGINJ_REMAP));
}

bool getADC1_ETRGREG_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_ADC1_ETRIGREG_REMAP));
}

bool getADC1_ETRGINJ_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_ADC1_ETRIGINJ_REMAP));
}

bool getPDO1_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_PDO1_REMAP));
}

bool getTIM4_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_TIM4_REMAP));
}

bool getUSART2_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_USART2_REMAP));
}

bool getUSART1_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_USART1_REMAP));
}

bool getTI2C1_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_I2C1_REMAP));
}

bool getSPI1_REMAP(void)
{
	return (*AFIO_MAPR & (1 << AFIO_MAPR_SPI_REMAP));
}



void setPORT(uint32_t value)
{
	*AFIO_EVCR |= (value << AFIO_EVCR_PORT);
}

void setPIN(uint32_t value)
{
	*AFIO_EVCR |= (value << AFIO_EVCR_PIN);
}

void setSWJ_CFG(uint32_t value)
{
	*AFIO_MAPR |= (value << AFIO_MAPR_SWJ_CFG);
}

void setCAN_REMAP(uint32_t value)
{
	*AFIO_MAPR |= (value << AFIO_MAPR_CAN_REMAP);
}

void setTIM3_REMAP(uint32_t value)
{
	*AFIO_MAPR |= (value << AFIO_MAPR_TIM3_REMAP);
}

void setTIM2_REMAP(uint32_t value)
{
	*AFIO_MAPR |= (value << AFIO_MAPR_TIM2_REMAP);
}

void setTIM1_REMAP(uint32_t value)
{
	*AFIO_MAPR |= (value << AFIO_MAPR_TIM1_REMAP);
}

void setUSART3_REMAP(uint32_t value)
{
	*AFIO_MAPR |= (value << AFIO_MAPR_USART3_REMAP);
}



uint32_t getPORT(void)
{
	return ((*AFIO_EVCR & (0x07 << AFIO_EVCR_PORT)) >> AFIO_EVCR_PORT);
}

uint32_t getPIN(void)
{
	return ((*AFIO_EVCR & (0x0F << AFIO_EVCR_PIN)) >> AFIO_EVCR_PIN);
}

uint32_t getSWJ_CFG(void)
{
	return ((*AFIO_MAPR & (0x07 << AFIO_MAPR_SWJ_CFG)) >> AFIO_MAPR_SWJ_CFG);
}

uint32_t getCAN_REMAP(void)
{
	return ((*AFIO_MAPR & (0x03 << AFIO_MAPR_CAN_REMAP)) >> AFIO_MAPR_CAN_REMAP);
}

uint32_t getTIM3_REMAP(void)
{
	return ((*AFIO_MAPR & (0x03 << AFIO_MAPR_TIM3_REMAP)) >> AFIO_MAPR_TIM3_REMAP);
}

uint32_t getTIM2_REMAP(void)
{
	return ((*AFIO_MAPR & (0x03 << AFIO_MAPR_TIM2_REMAP)) >> AFIO_MAPR_TIM2_REMAP);
}

uint32_t getTIM1_REMAP(void)
{
	return ((*AFIO_MAPR & (0x03 << AFIO_MAPR_TIM1_REMAP)) >> AFIO_MAPR_TIM1_REMAP);
}

uint32_t getUSART3_REMAP(void)
{
	return ((*AFIO_MAPR & (0x03 << AFIO_MAPR_USART3_REMAP)) >> AFIO_MAPR_USART3_REMAP);
}

