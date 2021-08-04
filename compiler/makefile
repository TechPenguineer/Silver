cc=gcc
CFLAGS = -Wall -g

SRC= $(wildcard src/*.c)

build: ${SRC}
	gcc -o $@ $^ ${CFLAGS}

clean: 
	