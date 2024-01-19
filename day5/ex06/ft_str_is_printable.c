

int ft_str_is_printable(char *str) {

	if (*(str+1) == '\0') return 1;

	while (*str != '\0') {
		int ascii = (int) *str;

		if (ascii > 127 || ascii < 32) return 0;
		str++;
	}

	return 1;
}

