
int ft_str_is_numeric(char *str) {
	if (*(str+1) == '\0') {
		return 1;
	}

	while (*str != '\0') {
		int ascii = (int) *str;

		if (ascii > 57 || ascii < 48) {
			return 0;
		}

		str++;
	}

	return 1;
}

