# Makefile for a simple C project

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Linker flags
LDFLAGS = 

# Target executable
TARGET = game

# Source files
SRCS = main.c chngdir.c collision.c movesnake.c snake.c terminal.c  

# Object files (change .c to .o)
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Linking step
$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS)

# Compilation step
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean up
clean:
	rm -f $(TARGET) $(OBJS)

# Phony targets
.PHONY: all clean
