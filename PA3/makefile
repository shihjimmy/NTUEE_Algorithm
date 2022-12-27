# CC and CFLAGS are varilables
CC = g++
CFLAGS = -c
AR = ar
ARFLAGS = rcv
# -c option ask g++ to compile the source files, but do not link.
# -g option is for debugging version
# -O2 option is for optimized version
DBGFLAGS = -g -D_DEBUG_ON_
OPTFLAGS = -O3

all	: bin/cb
	@echo -n ""

# optimized version
bin/cb	: cb.o main.o
			$(CC) $(OPTFLAGS) cb.o main.o -o bin/cb
main.o 	: src/main.cpp src/cyclebreaker.h
			$(CC) $(CFLAGS) $< -o $@
cb.o	: src/cyclebreaker.cpp src/cyclebreaker.h
			$(CC) $(CFLAGS) $(OPTFLAGS) $< -o $@

# clean all the .o and executable files
clean:
		rm -rf *.o lib/*.a lib/*.o bin/*