FLAGS = -Wall -Werror -Wextra -g
WRAP = -Wl,-wrap,malloc
SANITIZE = -fsanitize=address
TEST = ./unity/unity.c

all: test

test:
	gcc $(FLAGS) $(WRAP) functions/*.c *.c ../*.c -o run_test
	valgrind --leak-check=full --show-leak-kinds=all ./run_test
	./run_test

