CFLAGS=-Wall -g

all:  ex1 ex3

runa: 
	./ex1
	./ex3

clean:
	rm -f ex1 ex3
