# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

# the build target executable:
TARGET = executable
MAIN = Matrix-Matrix-Multiplication

all: $(TARGET)

$(TARGET): $(MAIN).o
	$(CC) $(CFLAGS) -o $(TARGET) $(MAIN).o

$(MAIN).o: $(MAIN).cc 
	$(CC) $(CFLAGS) -c $(MAIN).cc

clean:
	$(RM) -f $(TARGET) $(MAIN).o  
