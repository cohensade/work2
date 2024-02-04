all: connections


connections: main.o libmath.a
	gcc -Wall -g main.o libmath.a -o connections

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c


libmath.a: my_mat.o
	ar -rcs libmath.a my_mat.o

clean:
	rm -f *.o *.a connections

.PHONY: all clean