my_sin : my_sin.o
	gcc -g -ansi -Wall -pedantic my_sin.o -o my_sin -lm
my_sin.o : my_sin.c info.h
	gcc -c -ansi -Wall -pedantic my_sin.c -o my_sin.o -lm