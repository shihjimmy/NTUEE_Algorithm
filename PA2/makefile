# CC and CFLAGS are varilables
CC = g++
CFLAGS = -c
AR = ar
ARFLAGS = rcv
# -c option ask g++ to compile the source files, but do not link.
# -g option is for debugging version
# -O2 option is for optimized version
DBGFLAGS = -g -D_DEBUG_ON_
OPTFLAGS = -O2

all	: bin/mps
	@echo -n ""

# optimized version
bin/mps	: mps.o main.o
			$(CC) $(OPTFLAGS) mps.o main.o -o bin/mps
main.o 	: src/main.cpp src/mps.h
			$(CC) $(CFLAGS) $< -o $@
mps.o	: src/mps.cpp src/mps.h
			$(CC) $(CFLAGS) $(OPTFLAGS) $< -o $@

# clean all the .o and executable files
clean:
		rm -rf *.o lib/*.a lib/*.o bin/*