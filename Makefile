CC = gcc
CFLAGS = -c -o
LDFLAGS = 
# OBJECTS = main.o hello.o
# OBJECTS = codeup_1_40
OBJECTS = codeup_41_80.o

run: all
	./program

all: program

program : $(OBJECTS)
	$(CC) $(LDFLAGS) -o program $(OBJECTS)

# codeup_1_40.o: codeup_1_40.c
# 	$(CC) $(CFLAGS) codeup_1_40.o codeup_1_40.c

codeup_41_80.o: codeup_41_80.c
	$(CC) $(CFLAGS) codeup_41_80.o codeup_41_80.c

# main.o: main.c
# 	$(CC) $(CFLAGS) main.o main.c

# hello.o: hello.c
# 	$(CC) $(CFLAGS) hello.o hello.c


clean:
	rm -rf *.o *.exe program

