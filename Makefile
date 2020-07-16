#Makefile
all: run

add-nbo: main.o
	gcc -o add-nbo main.o
	
run: add-nbo
	./add-nbo $A $B

main.o: main.cpp
	gcc -c -o main.o main.cpp

clean:
	rm -f *.o add-nbo
