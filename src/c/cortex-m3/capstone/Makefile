# Project dependencies
PROJECT := final

# Build tools
CC=arm-none-eabi-gcc
CP=arm-none-eabi-objcopy

# Compiler options
CFLAGS  = -ggdb -O0 -Wall -Wextra -Warray-bounds -mlittle-endian
CFLAGS  += -mthumb -mcpu=cortex-m3 -mthumb-interwork

# Linker file / options
LFLAGS  = -T$(wildcard *.ld)
LFLAGS += --specs=nano.specs --specs=nosys.specs 
LFLAGS += -Wl,-Map -Wl,$(PROJECT).map

# Directories to be searched for header files
INCLUDE = -I../../STM32F10x_StdPeriph_Lib_V3.5.0/Libraries/CMSIS/CM3/CoreSupport 
INCLUDE += -I../../STM32F10x_StdPeriph_Lib_V3.5.0/Libraries/STM32F10x_StdPeriph_Driver/inc
INCLUDE += -I./

# Object files to be created
OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c)) $(patsubst %.s, %.o, $(wildcard *.s))

# Add Standard Peripheral Library to the build configuration
DEFS    = -DUSE_STDPERIPH_DRIVER

DIR=/home/ubuntu/Desktop/repositories/stlink/build/Release/bin/
ADDR=0x8000000


# Build targets
.PHONY: all
all: $(PROJECT).elf

%.o: %.c
	$(CC) $(INCLUDE) $(DEFS) $(CFLAGS) -c $< -o $@

%.o: %.s
	$(CC) $(INCLUDE) $(DEFS) $(CFLAGS) -c $< -o $@

$(PROJECT).elf: $(OBJECTS)
	$(CC) $(INCLUDE) $(DEFS) $(CFLAGS) $(LFLAGS) -o $@ $(OBJECTS)
	$(CP) -O binary $(PROJECT).elf $(PROJECT).bin

.PHONY: clean
clean:
	rm -rf *.o *.bin *.elf *.map
	
write:
	st-info --probe
	$(DIR)./st-flash write final.bin $(ADDR)
	
