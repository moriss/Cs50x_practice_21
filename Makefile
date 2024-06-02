# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -I../libcs50/src

# Directories
SRC_DIR = .
OBJ_DIR = obj
LIB_DIR = ../libcs50

# Source files and object files
SRCS = $(wildcard $(SRC_DIR)/*.c) $(LIB_DIR)/src/cs50.c
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

# Default rule
all: tic

# Rule for linking the final executable
tic: $(OBJS)
    $(CC) $(CFLAGS) -o tic $(OBJS) -L$(LIB_DIR) -lcs50

# Rule for compiling .c files to .o files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
    @mkdir -p $(OBJ_DIR)
    $(CC) $(CFLAGS) -c $< -o $@

# Rule for compiling libcs50 source file
$(LIB_DIR)/src/cs50.o: $(LIB_DIR)/src/cs50.c
    $(CC) $(CFLAGS) -c $< -o $@

# Clean rule
.PHONY: clean
clean:
    rm -f $(OBJ_DIR)/*.o tic
