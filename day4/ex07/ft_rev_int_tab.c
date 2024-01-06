#include <stdio.h>

void ft_rev_int_tab(int *tab, int size) {
	
	// An array with 0 or 1 element is already reversed
	if (size <= 1) {
		return;
	}

	// Loop through the array and just swap the numbers:
	int i = 0;
	while (i <= size / 2) {
		// We can also use XOR here, but we're not interested in teh swapping method.
		int temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
	return;
}
	
