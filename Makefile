CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -Iinclude

program: main.o stdio.o
	$(CC) $(CFLAGS) main.o stdio.o -o program

main.o: main.c include/stdio.h
	$(CC) $(CFLAGS) -c main.c

stdio.o: src/stdio.c include/stdio.h
	$(CC) $(CFLAGS) -c src/stdio.c -o stdio.o

clean:
	rm -f *.o program.exe