CC=arm-none-eabi-gcc
AR=arm-none-eabi-ar
MACH=cortex-m3
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0 
ARFLAGS= rcs 

all:flash.o nvic.o gpio.o rcc.o spi.o systick.o libstm32f103c8t6.a

flash.o: flash.c
	$(CC) $(CFLAGS) $^ -o $@ 

nvic.o: nvic.c
	$(CC) $(CFLAGS) $^ -o $@ 
	
gpio.o: gpio.c
	$(CC) $(CFLAGS) $^ -o $@ 
	
rcc.o: rcc.c
	$(CC) $(CFLAGS) $^ -o $@ 
	
spi.o: spi.c
	$(CC) $(CFLAGS) $^ -o $@ 
	
systick.o: systick.c
	$(CC) $(CFLAGS) $^ -o $@ 

libstm32f103c8t6.a: flash.o nvic.o gpio.o rcc.o spi.o systick.o
	$(AR) $(ARFLAGS) ../include/$@ $^  	
	
clean:
	rm -rf *.o 
	rm -rf ../include/*.a 
