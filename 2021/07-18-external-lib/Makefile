CFLAGS=-DLOG_USE_COLOR

# build library log.so
log.o:
	gcc ${CFLAGS} -c -o log.o log.c

# build log_example.c (contains the main function)
# into log_example binary.
log_example: log.o
	gcc -o log_example log.o log_example.c

clean:
	rm -rfv log.o log_example

all: clean log_example
