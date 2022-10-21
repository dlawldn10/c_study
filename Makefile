CC = gcc
CFLAGS = -c -o
LDFLAGS = 
OBJECTS = main.o hello.o

run: all
	./program

all: program

program : $(OBJECTS)
	$(CC) $(LDFLAGS) -o program $(OBJECTS)

main.o: main.c
	$(CC) $(CFLAGS) main.o main.c

hello.o: hello.c
	$(CC) $(CFLAGS) hello.o hello.c


clean:
	rm -rf *.o *.exe program

