all: sum_test

sum_test: main.o sum.o
	gcc -o sum_test main.o sum.o

main.o: main.c sum.h
	gcc -c -o main.o main.c

sum.o: sum.c sum.h
	gcc -c -o sum.o sum.c

clean: 
	rm -rf *.o
	rm -rf sum_test

