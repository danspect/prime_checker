sources := $(wildcard *.c)

compile: $(sources)
	gcc $(sources) -lm -o prime_checker
