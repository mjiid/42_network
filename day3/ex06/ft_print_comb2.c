#include <unistd.h>

void ft_print_comb2(void) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				for (int l = 0; l < 10; l++) {
					if ((i * 10 + j) >= (k * 10 + l)) {
						continue;
					}

					char digits[5] = {'0' + i, '0' + j, ' ', '0' + k, '0' + l};
					write(1, digits, 5);
					
					
					if (i == 9 && j == 8 && k == 9 && l == 9) {
						continue;
					}
					char separators[2]= {',', ' '};
					write(1, separators, 2);
				}
			}
		}
	}
}

