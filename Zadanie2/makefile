# Makefile

all: main

main: main.o f.o rozwiazanie.o
	clang -o main main.o f.o rozwiazanie.o -lm

rozwiazanie.o: rozwiazanie.c f.o
	clang -c rozwiazanie.c

f.o: f.c
	clang -c f.c

