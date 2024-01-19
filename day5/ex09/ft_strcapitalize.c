
char *ft_strcapitalize(char *str) {
	int i = 0;
	
	while (str[i] != '\0') {
		if (i == 0 && str[i] > 'a' && str[i] < 'z') {
			str[i] -= ('a' - 'A');
		}


		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z') {
			if (str[i+1] >= 'a' && str[i+1] <= 'z') {
					str[i+1] -= ('a' - 'A');	
			}
		}
		i++;
	}
	return str;
}
