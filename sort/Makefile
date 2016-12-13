INC=-I ../include
CFLAG=-g

all:
	gcc -I ../include -g -o insertion.o -c insertion.c
	make -C test all

clean:
	rm -fv *.o
	make -C test clean

run:
	gcc -I ../include -g -o insertion.o -c insertion.c
	make -C test run

