all: dotprod

dotprod: main.o dotp.o
	gcc -o dotprod main.o dotp.o

main.o: main.c dotp.h
	gcc -c main.c

dotp.o: dotp.c dotp.h
	gcc -c dotp.c

clean:
	rm -f *.o dotprod