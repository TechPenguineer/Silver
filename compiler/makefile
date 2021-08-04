cc=gcc
CFLAGS = -g -c 
OBJDIR = objects
SRC= $(wildcard src/*.c src/util/*.c )
SRCH= $(wildcard src/*.h )
EXT=svrs


BUILD_TARG = ${SRC} src/functionHandler.h
build: ${BUILD_TARG}
	${cc} -g -Wall -o slv ${SRC}
	${cc} -g ${CFLAGS} ${SRC} -o objects/$@.o
	
clean: 
	rm ${wildcard objects/*}
	rm ${wildcard *.exe}

rebuild:
	make clean
	make build