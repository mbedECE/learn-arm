#include <stdint.h>

#define SRAM_START	0x20000000U
#define SRAM_SIZE	(128U * 1024U) //128KB
#define SRAM_END	((SRAM_START) + (SRAM_SIZE))
#define STACK_SIZE	400

#define STACK_END	((SRAM_START) + (STACK_SIZE))

extern uint32_t _end_of_text;
extern uint32_t _start_of_data;
extern uint32_t _end_of_data;
extern uint32_t _start_of_bss;
extern uint32_t _end_of_bss;
extern uint32_t _DataLoad;

int main(void);

void Reset_Handler(void);
void NMI_Handler(void)			__attribute__((alias("Default_Handler")));
void HardFault_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void MemManage_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void BusFault_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void SVCall_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void Debug_Monitor_Handler(void)	__attribute__((weak, alias("Default_Handler")));
void PendSV_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void SysTick_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void WWDG_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void PVD_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void TAMPER_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void RTC_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void FLASH_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void RCC_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void EXTI0_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void EXTI1_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void EXTI2_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void EXTI3_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void EXTI4_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void DMA_Channel1_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void DMA_Channel2_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void DMA_Channel3_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void DMA_Channel4_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void DMA_Channel5_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void DMA_Channel6_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void DMA_Channel7_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void ADC1_2_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void CAN1_TX_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void CAN1_RX0_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void CAN1_RX1_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void CAN1_SCE_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void EXTI9_5_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void TIM1_BRK_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void TIM1_UP_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void TIM1_TRG_COM_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void TIM1_CC_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void TIM2_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void TIM3_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void TIM4_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void I2C1_EV_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void I2C1_ER_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void I2C2_EV_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void I2C2_ER_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void SPI1_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void SPI2_Handler(void)			__attribute__((weak, alias("Default_Handler")));
void USART1_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void USART2_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void USART3_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void EXTI15_10_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void RTCAlarm_Handler(void)		__attribute__((weak, alias("Default_Handler")));
void OTG_FS_WKUP_Handler(void)		__attribute__((weak, alias("Default_Handler")));


uint32_t vectors[] __attribute__((section(".vector_table"))) = {
	STACK_END,
	(uint32_t)Reset_Handler,
	(uint32_t)NMI_Handler,
	(uint32_t)HardFault_Handler,
	(uint32_t)MemManage_Handler,
	(uint32_t)BusFault_Handler,
	(uint32_t)UsageFault_Handler,
	0,
	0,
	0,
	0,
	(uint32_t)SVCall_Handler,
	(uint32_t)Debug_Monitor_Handler,
	0,
	(uint32_t)&PendSV_Handler,
	(uint32_t)&SysTick_Handler,
	(uint32_t)&WWDG_Handler,
	(uint32_t)&PVD_Handler,
	(uint32_t)&TAMPER_Handler,
	(uint32_t)&RTC_Handler,
	(uint32_t)&FLASH_Handler,
	(uint32_t)&RCC_Handler,
	(uint32_t)&EXTI0_Handler,
	(uint32_t)&EXTI1_Handler,
	(uint32_t)&EXTI2_Handler,
	(uint32_t)&EXTI3_Handler,
	(uint32_t)&EXTI4_Handler,
	(uint32_t)&DMA_Channel1_Handler,
	(uint32_t)&DMA_Channel2_Handler,
	(uint32_t)&DMA_Channel3_Handler,
	(uint32_t)&DMA_Channel4_Handler,
	(uint32_t)&DMA_Channel5_Handler,
	(uint32_t)&DMA_Channel6_Handler,
	(uint32_t)&DMA_Channel7_Handler,
	(uint32_t)&ADC1_2_Handler,
	(uint32_t)&CAN1_TX_Handler,
	(uint32_t)&CAN1_RX0_Handler,
	(uint32_t)&CAN1_RX1_Handler,
	(uint32_t)&CAN1_SCE_Handler,
	(uint32_t)&EXTI9_5_Handler,
	(uint32_t)&TIM1_BRK_Handler,
	(uint32_t)&TIM1_UP_Handler,
	(uint32_t)&TIM1_TRG_COM_Handler,
	(uint32_t)&TIM1_CC_Handler,
	(uint32_t)&TIM2_Handler,
	(uint32_t)&TIM3_Handler,
	(uint32_t)&TIM4_Handler,
	(uint32_t)&I2C1_EV_Handler,
	(uint32_t)&I2C1_ER_Handler,
	(uint32_t)&I2C2_EV_Handler,
	(uint32_t)&I2C2_ER_Handler,
	(uint32_t)&SPI1_Handler,
	(uint32_t)&SPI2_Handler,
	(uint32_t)&USART1_Handler,
	(uint32_t)&USART2_Handler,
	(uint32_t)&USART3_Handler,
	(uint32_t)&EXTI15_10_Handler,
	(uint32_t)&RTCAlarm_Handler,
	(uint32_t)&OTG_FS_WKUP_Handler,
};

void Reset_Handler(void)
{
	//determine size of data section//
	uint32_t size = (uint32_t)&_end_of_data - (uint32_t)&_start_of_data;	
	
	uint8_t *Dst = (uint8_t*)&_start_of_data; //sram
	uint8_t *Src = (uint8_t*)&_DataLoad; //flash
	
	for(uint32_t i= 0; i < size; i++)
	{
		*Dst++ = *Src++;
	}
	
	//determine size of bss section//
	size = (uint32_t)&_end_of_bss - (uint32_t)&_start_of_bss;
	Dst = (uint8_t*)&_start_of_bss;
	
	for(uint32_t i= 0; i < size; i++)
	{
		*Dst++ = 0;
	}
	
	main();
}

void Default_Handler(void)
{
	while(1);
}
