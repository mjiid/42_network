#include <unistd.h>

void ft_putstr_non_printable(char *str) {
	int i = 0;
	char hexChars[] = "0123456789abcdef";

	while (str[i] != 0) {
		int ascii = (int) str[i];
		
		if (ascii >= 32 && ascii <= 126) {
			write(1, &str[i], 1);
		}
		else {
			char back = '\\';
			write(1, &back, 1);
			write(1, &hexChars[(str[i] >> 4) & 0xF], 1);
			write(1, &hexChars[str[i] & 0xF], 1);	
		}
		i++;
	}
}

