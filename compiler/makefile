cc=gcc
CFLAGS = -g -c 
OBJDIR = objects
SRC= $(wildcard src/*.c src/util/*.c )
SRCH= $(wildcard src/*.h )


BUILD_TARG = ${SRC} src/functionHandler.h
build: ${BUILD_TARG}
	${cc} -g -Wall -o slv ${SRC}
	${cc} -g ${CFLAGS} ${SRC}
	
clean: 
	rm ${wildcard *.o}
	rm ${wildcard *.exe}

rebuild:
	make clean
	make build