#include <unistd.h>

// Goal: A C-String is a just a pointer to the first character, and every string ends with a null terminator.
void ft_putstr(char *str) {
	while (*str != '\0') {
		write(1, str, 1);
		str++;
	}
	return;
}
