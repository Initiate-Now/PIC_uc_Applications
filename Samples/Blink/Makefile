# Compiler and flags
CC = xc8
MCU = 16F877A
CFLAGS = --chip=$(MCU)

# Source and output files
SRC = main.c
OUTPUT = blink.hex

# Default target
all: $(OUTPUT)

# Rule to compile source into HEX file
$(OUTPUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

# Clean up build artifacts
clean:
	rm -f *.hex *.p1 *.err *.d *.o
