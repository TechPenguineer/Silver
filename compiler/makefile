cc=gcc
CFLAGS = -g -c 
OBJDIR = objects
SRC= $(wildcard src/*.c)

objects = $(addprefix $(OBJDIR)/,${wildcard *.o})

build: ${objects}
	${cc} -g ${CFLAGS} ${SRC}
	
clean: 
	rm ${wildcard *.o}