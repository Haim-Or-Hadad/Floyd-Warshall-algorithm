FLAGS=-Wall -g
CC=gcc


all: connections

connections: main.o my_mat.a
	$(CC) $(FLAGS) -o connections main.o my_mat.a

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

my_mat.o: my_mat.c my_mat.h
	$(CC)	$(FLAGS) -c my_mat.c 

my_mat.a: my_mat.o 
	ar -rcs my_mat.a my_mat.o
	ranlib my_mat.a

.PHONY: clean all

clean: 
	rm -f *o *a connections
