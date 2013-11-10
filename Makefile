CC = gcc
CFLAGS = -I.
LDFLAGS = 
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: main

main: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm *.o main
