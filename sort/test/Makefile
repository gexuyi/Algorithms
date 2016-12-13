all:
	gcc -I ../../include ../insertion.o -g -o testIns instest.c

clean:
	rm -fv *.o testIns

run:
	gcc -I ../../include ../insertion.o -g -o testIns instest.c
	@echo "---begin run testIns---"
	./testIns
	@echo "---finish run testIns---"
