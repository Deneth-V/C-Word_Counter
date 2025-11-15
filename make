CC = gcc

CFLAGS = -Wall -Wextra -g -std=c11

TARGET = C-Word_Counter

SOURCES = main.c cs50.c

all: $(TARGET)

$(TARGET): $(SOURCES)

	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES) -lm


clean:
	rm -f $(TARGET)
