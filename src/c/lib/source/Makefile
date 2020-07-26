CC=arm-none-eabi-gcc
AR=arm-none-eabi-ar
MACH=cortex-m3
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0 
ARFLAGS= rcs

SOURCES= $(wildcard *.c)
OBJECTS= $(SOURCE:.c=.o) 
OBJ= $(wildcard ../obj/*.o)

OBJ_PATH=../obj/
INC_PATH= ../include/

all:flash.o nvic.o gpio.o rcc.o spi.o systick.o delay.o timers.o libstm32f103c8t6.a

flash.o: flash.c
	$(CC) $(CFLAGS) $^ -o $(OBJ_PATH)$@ 

nvic.o: nvic.c
	$(CC) $(CFLAGS) $^ -o $(OBJ_PATH)$@ 
	
gpio.o: gpio.c
	$(CC) $(CFLAGS) $^ -o $(OBJ_PATH)$@ 
	
rcc.o: rcc.c
	$(CC) $(CFLAGS) $^ -o $(OBJ_PATH)$@ 
	
spi.o: spi.c
	$(CC) $(CFLAGS) $^ -o $(OBJ_PATH)$@ 
	
systick.o: systick.c
	$(CC) $(CFLAGS) $^ -o $(OBJ_PATH)$@ 
	
delay.o: delay.c
	$(CC) $(CFLAGS) $^ -o $(OBJ_PATH)$@ 
	
timers.o: timers.c
	$(CC) $(CFLAGS) $^ -o $(OBJ_PATH)$@ 

libstm32f103c8t6.a: $(OBJECTS)
	$(AR) $(ARFLAGS) $(INC_PATH)$@ $(OBJ)  	
	
clean:
	rm -rf $(OBJ_PATH)*.o 
	rm -rf $(INC_PATH)*.a 
