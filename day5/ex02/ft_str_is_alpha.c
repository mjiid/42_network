
int ft_str_is_alpha(char *str) {
	if (*(str+1) == '\0') {
		return 1;
	}
 
	while (*str != '\0') {
		int ascii = (int) *str;
		if (ascii < 65 || ascii > 122) return 0;
		if (ascii > 90 && ascii < 97) return 0;
		str++;
	}
	return 1;
}

