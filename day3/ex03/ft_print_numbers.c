#include <unistd.h>

void ft_print_numbers(void) {
	int num = 0;

	while (num < 10) {
		int digit = '0' + num;
		write(1, &digit, 4);
		num++;
	}
	return;
}
