#include <stdint.h>
#include "../include/gpio.h"


//PORTA
uint32_t *GPIOA_CRL =(uint32_t*)PORTA_BASE;
uint32_t *GPIOA_CRH =(uint32_t*)(PORTA_BASE + 0x04);
uint32_t *GPIOA_IDR =(uint32_t*)(PORTA_BASE + 0x08);
uint32_t *GPIOA_ORD =(uint32_t*)(PORTA_BASE + 0x0C);
uint32_t *GPIOA_BSRR =(uint32_t*)(PORTA_BASE + 0x10);
uint32_t *GPIOA_BRR =(uint32_t*)(PORTA_BASE + 0x14);
uint32_t *GPIOA_LCKR =(uint32_t*)(PORTA_BASE + 0x18);

//PORTB
uint32_t *GPIOB_CRL =(uint32_t*)PORTB_BASE;
uint32_t *GPIOB_CRH =(uint32_t*)(PORTB_BASE + 0x04);
uint32_t *GPIOB_IDR =(uint32_t*)(PORTB_BASE + 0x08);
uint32_t *GPIOB_ORD =(uint32_t*)(PORTB_BASE + 0x0C);
uint32_t *GPIOB_BSRR =(uint32_t*)(PORTB_BASE + 0x10);
uint32_t *GPIOB_BRR =(uint32_t*)(PORTB_BASE + 0x14);
uint32_t *GPIOB_LCKR =(uint32_t*)(PORTB_BASE + 0x18);

//PORTC
uint32_t *GPIOC_CRL =(uint32_t*)PORTC_BASE;
uint32_t *GPIOC_CRH =(uint32_t*)(PORTC_BASE + 0x04);
uint32_t *GPIOC_IDR =(uint32_t*)(PORTC_BASE + 0x08);
uint32_t *GPIOC_ORD =(uint32_t*)(PORTC_BASE + 0x0C);
uint32_t *GPIOC_BSRR =(uint32_t*)(PORTC_BASE + 0x10);
uint32_t *GPIOC_BRR =(uint32_t*)(PORTC_BASE + 0x14);
uint32_t *GPIOC_LCKR =(uint32_t*)(PORTC_BASE + 0x18);

//PORTD
uint32_t *GPIOD_CRL =(uint32_t*)PORTD_BASE;
uint32_t *GPIOD_CRH =(uint32_t*)(PORTD_BASE + 0x04);
uint32_t *GPIOD_IDR =(uint32_t*)(PORTD_BASE + 0x08);
uint32_t *GPIOD_ORD =(uint32_t*)(PORTD_BASE+ 0x0C);
uint32_t *GPIOD_BSRR =(uint32_t*)(PORTD_BASE + 0x10);
uint32_t *GPIOD_BRR =(uint32_t*)(PORTD_BASE + 0x14);
uint32_t *GPIOD_LCKR =(uint32_t*)(PORTD_BASE + 0x18);

//PORTE
uint32_t *GPIOE_CRL =(uint32_t*)PORTE_BASE;
uint32_t *GPIOE_CRH =(uint32_t*)(PORTE_BASE + 0x04);
uint32_t *GPIOE_IDR =(uint32_t*)(PORTE_BASE + 0x08);
uint32_t *GPIOE_ORD =(uint32_t*)(PORTE_BASE + 0x0C);
uint32_t *GPIOE_BSRR =(uint32_t*)(PORTE_BASE + 0x10);
uint32_t *GPIOE_BRR =(uint32_t*)(PORTE_BASE + 0x14);
uint32_t *GPIOE_LCKR =(uint32_t*)(PORTE_BASE + 0x18);

void configurePortPin(uint32_t port, uint32_t pin, uint32_t config, uint32_t mode)
{
	//determine which config register
	uint32_t config_register = (pin / 8);
	uint32_t position = (pin % 8) * 4;
	uint32_t pin_config = ((config << 2) | mode);
	
	switch(port)
	{
		case PORTA:
			if(config_register == 0)
			{
				*GPIOA_CRL &= ~(0x0F << position);
				*GPIOA_CRL |= (pin_config << position);
			}
			else
			{
				*GPIOA_CRH &= ~(0x0F << position);
				*GPIOA_CRH |= (pin_config << position);
			}
			break;
			
		case PORTB:
			if(config_register == 0)
			{
				*GPIOB_CRL &= ~(0x0F << position);
				*GPIOB_CRL |= (pin_config << position);
			}
			else
			{
				*GPIOB_CRH &= ~(0x0F << position);
				*GPIOB_CRH |= (pin_config << position);	
			}	
			break;
			
		case PORTC:
			if(config_register == 0)
			{
				*GPIOC_CRL &= ~(0x0F << position);
				*GPIOC_CRL |= (pin_config << position);
			}
			else
			{
				*GPIOC_CRH &= ~(0x0F << position);
				*GPIOC_CRH |= (pin_config << position);		
			}
			break;
			
		case PORTD:
			if(config_register == 0)
			{
				*GPIOD_CRL &= ~(0x0F << position);
				*GPIOD_CRL |= (pin_config << position);
			}
			else
			{
				*GPIOD_CRH &= ~(0x0C << position);
				*GPIOD_CRH |= (pin_config << position);	
			}	
			break;
			
		case PORTE:
			if(config_register == 0)
			{
				*GPIOE_CRL &= ~(0x0F << position);
				*GPIOE_CRL |= (pin_config << position);
			}
			else
			{
				*GPIOE_CRH &= ~(0x0F << position);
				*GPIOE_CRH |= (pin_config << position);	
			}	
			break;									
	}
}

void pinState(uint32_t port, uint32_t pin, uint32_t state)
{
	switch(port)
	{
		case PORTA:
			if(state == 1)
				*GPIOA_BSRR |= (1 << pin);
			else
				*GPIOA_BSRR |= (1 << (pin + 16));
			break;
			
		case PORTB:
			if(state == 1)
				*GPIOB_BSRR |= (1 << pin);
			else
				*GPIOB_BSRR |= (1 << (pin + 16));	
			break;
			
		case PORTC:
			if(state == 1)
				*GPIOC_BSRR |= (1 << pin);
			else
				*GPIOC_BSRR |= (1 << (pin + 16));	
			break;
			
		case PORTD:
			if(state == 1)
				*GPIOD_BSRR |= (1 << pin);
			else
				*GPIOD_BSRR |= (1 << (pin + 16));		
			break;
			
		case PORTE:
			if(state == 1)
				*GPIOE_BSRR |= (1 << pin);
			else
				*GPIOE_BSRR |= (1 << (pin + 16));	
			break;									
	}	
}

void toggle(uint32_t port, uint32_t pin)
{
	switch(port)
	{
		case PORTA:
			*GPIOA_ORD ^= (1 << pin);
			break;
			
		case PORTB:
			*GPIOB_ORD ^= (1 << pin);
			break;
			
		case PORTC:
			*GPIOC_ORD ^= (1 << pin);
			break;
			
		case PORTD:
			*GPIOD_ORD ^= (1 << pin);
			break;
			
		case PORTE:
			*GPIOE_ORD ^= (1 << pin);
			break;									
	}	
}


