# Compiler
CC = gcc

# Include folder
CFLAGS = -Iinclude -Wall

# Libraries (SDL2)
LIBS = $(shell pkg-config --cflags --libs sdl2)

# Source files
SRC = $(wildcard src/*.c)

# Object files (same names as source files but .o)
OBJ = $(SRC:.c=.o)

# Output executable
TARGET = build/mygame

# Default target
all: $(TARGET)

# Compile executable from object files
$(TARGET): $(OBJ)
	@mkdir -p build
	$(CC) $(OBJ) -o $(TARGET) $(LIBS)
	@echo "Build complete: $(TARGET)"

# Compile each .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f src/*.o
	rm -rf build
	@echo "Clean complete"

# Run the program
run: $(TARGET)
	./$(TARGET)
