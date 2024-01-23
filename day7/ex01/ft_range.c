#include <stdlib.h>

int *ft_range(int min, int max) {
	// Size of the array:
	int size = max - min;

	// Allocating memory:
	int *arr = malloc(size * sizeof(int));
	if (arr == NULL) return NULL; // In case memory allocation failed!
	
	// Filling the array
	int i = min;
	while (i < max) {
		arr[i - min] = i;
		i++;
	}

	return arr;
}

