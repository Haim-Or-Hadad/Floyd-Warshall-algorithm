

all: connections


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