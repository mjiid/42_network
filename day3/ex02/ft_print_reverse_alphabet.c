#include <unistd.h>

void ft_print_reverse_alphabet(void) {
	char start = 'z';
	while (start >= 'a') {
		write(1, &start, 1);
		start--;
	}
	return;
}

