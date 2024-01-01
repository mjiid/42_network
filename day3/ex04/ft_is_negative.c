#include <unistd.h>

void ft_is_negative(int n) {
	char res;
	if (n < 0) {
		res = 'N';
	}
	else {
		res = 'P';
	}
	write(1, &res, 1);
	return;
}
