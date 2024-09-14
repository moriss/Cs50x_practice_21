# Compiler
CC = gcc

# Paths
CS50_PATH = libcs50
SRC_DIR = .

# Compiler and linker flags
CFLAGS = -Wall -Wextra -I$(CS50_PATH)/src
LDFLAGS = $(CS50_PATH)/build/lib/libcs50.a

# Target executable
TARGET = try

# Default rule to build the target
all: $(TARGET)

# Rule to build the target from the .c file
$(TARGET): $(SRC_DIR)/try.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

# Clean up build artifacts
clean:
	rm -f $(TARGET)

