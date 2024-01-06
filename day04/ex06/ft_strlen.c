
// Goal: Implement len() function with pointers.
int ft_strlen(char *str) {
	int len = 0;
	while (*str != '\0') {
		len++;
		str++;
	}
	return len;
}

