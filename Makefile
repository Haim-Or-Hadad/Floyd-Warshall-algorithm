<<<<<<< HEAD
FLAGS=-Wall -g
CC=gcc
=======
>>>>>>> b7ddca51e5b6e1b1741dde2f4cdf4ff4a58e447d


all: connections

<<<<<<< HEAD
connections: main.o my_mat.a
	$(CC) $(FLAGS) -o connections main.o my_mat.a

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

my_mat.o: my_mat.c my_mat.h
	$(CC)	$(FLAGS) -c my_mat.c 

my_mat.a: my_mat.o 
	ar -rcs my_mat.a my_mat.o 

.PHONY: clean

clean: 
	rm -f *o *a connections

=======

main.o: main.c 
		gcc -Wall -g -c main.c

my_mat.o: my_mat.c 	
		gcc -Wall -g -c my_mat.c

my_mat.a: my_mat.h 
		gcc -Wall -g -c my_mat.h

connections:

.PHONY: clean all

clean:
        rm -f *.o *.a *.so ???
>>>>>>> b7ddca51e5b6e1b1741dde2f4cdf4ff4a58e447d
