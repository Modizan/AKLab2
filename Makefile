all: build run

run:
	./lab2

build:
	g++ -c calculator.cpp
	ar cr libcalculator.a calculator.o
	g++ -c cli.cpp
	g++ cli.o -L. -lcalculator -o lab2

clean:
	rm -rf *.o ./lab2
