all: sig.o
	gcc sig.o

sig.o: sig.c
	gcc -c sig.c

run:
	./a.out

clean:
	rm write.txt
