#include <unistd.h>

void ft_print_comb(void) {
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			for (int k = j + 1; k < 10; k++) {
				char digits[] = {'0' + i, '0' + j, '0' + k};
				write(1, digits, 3);
	
				if (i == 7 && j == 8 && k == 9) {
					return;
				}			
				
				char separator[] = {',', ' '};
				write(1, separator, 2);
			}
		}
	}
}

