

int ft_str_is_lowercase(char *str) {
	if (*(str+1) == '\0') {
		return 1;
	}

	while (*str != '\0') {
		int ascii = (int) *str;

		if (ascii > 122 || ascii < 97) {
			return 0;
		}

		str++;
	}

	return 1;
}

