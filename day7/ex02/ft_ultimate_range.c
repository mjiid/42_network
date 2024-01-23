#include <stdlib.h>


int ft_ultimate_range(int **range, int min, int max) {
	if (min >= max) {
		*range = NULL;
		return 0;
	}
	
	
	int size = max - min;
	// Allocate memory:
	*range = (int*) malloc(size * sizeof(int));
	if (*range == NULL) return -1;

	int i = min;
	while (i < max) {
		(*range)[i - min] = i;
		i++;
	}

	return size;
}


