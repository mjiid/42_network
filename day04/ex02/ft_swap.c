
void ft_swap(int *a, int *b) {
	// Using the XOR operator:
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
