#include <stdio.h>

char *ft_strupcase(char *str) {
	int i = 0;	
	
	while (*(str + i) != '\0') {
		char c = *(str + i);

		if ( c >= 'a' && c <= 'z') {
			*(str + i) = c - 32;
		}

		i++;
	}

	return str;
}


int main() {
	
	char input[] = "hello";
	printf("%s\n", ft_strupcase(input));
	return 0;
}


