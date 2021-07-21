CFLAGS=-DLOG_USE_COLOR

# build library log.so
.PHONY: log.o
log.o:
	gcc ${CFLAGS} -c -o log.o lib/log/log.c

.PHONY: mymath.o
mymath.o:
	gcc ${CFLAGS} -c -o mymath.o lib/mymath/mymath.c

# build log_example.c (contains the main function)
# into log_example binary.
.PHONY: main
main: log.o mymath.o
	gcc -o main log.o mymath.o main.c

clean:
	rm -rfv log.o main

all: clean main
