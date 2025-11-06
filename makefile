CC = gcc
CFLAGS = -Wall -g

all: hello mrcrowley

hello: hello.c Square.c Square.h
	$(CC) $(CFLAGS) hello.c Square.c -o hello

mrcrowley: mrcrowley.c Square.c Square.h
	$(CC) $(CFLAGS) mrcrowley.c Square.c -o mrcrowley

clean:
	-$(RM) hello.exe mrcrowley.exe
