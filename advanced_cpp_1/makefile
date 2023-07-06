# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++11
# Source file
SRC = dummy.cc main.cc

# Output executable
TARGET = exe_generated_by_make_file

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean up the generated files
clean:
	rm $(TARGET)

