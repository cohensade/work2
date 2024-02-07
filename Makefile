all: my_graph my_Knapsack


my_graph: my_graph.o libmath.a
	gcc -Wall -g my_graph.o libmath.a -o my_graph

my_Knapsack: my_Knapsack.o libmath.a
	gcc -Wall -g my_Knapsack.o libmath.a -o my_Knapsack

my_graph.o: my_graph.c my_mat.h
	gcc -Wall -g -c my_graph.c

my_Knapsack.o: my_Knapsack.c my_mat.h
	gcc -Wall -g -c my_Knapsack.c

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c


libmath.a: my_mat.o
	ar -rcs libmath.a my_mat.o

clean:
	rm -f *.o *.a my_graph

.PHONY: all clean