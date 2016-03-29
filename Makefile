CFLAGS = -std=gnu99 -O2 -Wall -ggdb

all: test_call.c
	${CC} ${CFLAGS} -o test_call $^

clean::
	-rm -f *~ *.o *.dep test_call
