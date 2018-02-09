CFLAGS = -g -Wall
CC = gcc

objs = exchanger.o bank.o

exchanger: $(objs)
	$(CC) $(CFLAGS) -o exchanger $(objs)

exchanger.o: exchanger.c bank.h

.PHONY: clean
clean:
	rm exchanger $(objs)
