#include <stdlib.h>


char *ft_strdup(char *src) {
	if (src == NULL) return NULL;

	// Calculate the length of src
	int size = 0;
	while (src[size] != '\0') {
		size++;
	}
	
	// Allocating memory
	char *dest = malloc(size + 1);
	if (dest == NULL) return NULL;

	// Copy src to dest:
	int i = 0;
	while (i < size) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; 

	return dest;
}
