.DEFAULT_GOAL := test

test: clean main
	@./main

main:
	@gcc -Wall main.c tree.c -o main

clean:
	@rm -rf *.o
	@rm -rf ./main
