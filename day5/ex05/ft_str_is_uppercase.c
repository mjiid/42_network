#include <stdio.h>

int ft_str_is_uppercase(char *str) {
	if (*(str+1) == '\0') {
		return 1;
	}

	while (*str != '\0') {
		int ascii = (int) *str;

		if (ascii > 90 || ascii < 65) {
			return 0;
		}

		str++;
	}

	return 1;
}


int main() {

	printf("%d\n", ft_str_is_uppercase("HELLO"));
	return 0;
}
