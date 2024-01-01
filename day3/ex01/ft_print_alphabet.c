#include <unistd.h>

void ft_print_alphabet(void) {
	char start = 'a';
	while (start - 'a' < 26) { 
		write(1, &start, 1);
		start++;
	}
	return;
}
