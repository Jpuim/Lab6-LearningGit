CC = gcc
CFLAGS = -Wall -g

OBJS = hello.o Square.o
MOBJS = mrcrowley.o Square.o

all: hello mrcrowley

hello: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o hello

mrcrowley: $(MOBJS)
	$(CC) $(CFLAGS) $(MOBJS) -o mrcrowley

%.o: %.c Square.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-$(RM) *.o hello.exe mrcrowley.exe
