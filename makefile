wykon: main.o biblioteka.o
	g++ -lm main.o biblioteka.o -o wykon

biblioteka.o: biblioteka.cpp biblioteka.h
	g++ -Wall -c biblioteka.cpp -o biblioteka.o

main.o: main.cpp biblioteka.h
	g++ -Wall -c main.cpp -o main.o

.PHONY: clean

clean:
	rm -f main.o biblioteka.o wykon
run:
	./wykon

