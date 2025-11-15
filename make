CC = gcc
CFLAGS = -Wall -Wextra -g 

# 1. List ALL source files here!
SOURCES = word_counter.c cs50.c 

TARGET = word_counter

all: $(TARGET)

$(TARGET): $(SOURCES)
	# 2. Compile all source files and link the math library (-lm)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES) -lm

clean:
	rm -f $(TARGET)
