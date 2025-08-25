CC=gcc
CFLAGS=-Wall -Wextra -std=c99
TARGET=afd_constantes
SRC=main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: all
	./$(TARGET) entrada.txt

clean:
	rm -f $(TARGET)
