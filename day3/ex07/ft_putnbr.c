#include <unistd.h>

void ft_putnbr(int nb) {

	long nbr = nb;
	if (nbr < 0) {
		char minus = '-';
		write(1, &minus, 1);
		nbr *= -1;
	}

	long divisor = 1;
	while (nbr / divisor >= 10) {
		divisor *= 10;
	}

	while (divisor > 0) {
		char digit = '0' + nbr / divisor;
		write(1, &digit, 1);
		nbr %= divisor;
		divisor /= 10;
	}

	return;
}
