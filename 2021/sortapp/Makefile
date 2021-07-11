help: ## Prints help for targets with comments
	@cat $(MAKEFILE_LIST) | grep -E '^[a-zA-Z_-]+:.*?## .*$$' | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'


all: bin gen sort test

bin:
	mkdir -p bin

gen: bin ## Build the program to generate test files
	gcc -o ./bin/gen ./cmd/gen.c

sort: ## Build the program to read and sort test files
	gcc -o ./bin/sort ./cmd/sort.c

test: ## Run tests
	echo "test ..."
