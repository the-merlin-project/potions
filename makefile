make:
	$(CC) main.c -pedantic -std=c99 -o container -Wall -Wextra -fsanitize=undefined -fsanitize=address
