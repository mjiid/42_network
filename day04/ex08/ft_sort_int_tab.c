
void ft_sort_int_tab(int *tab, int size) {
	// Let's do selection sort:
	int i = 0;
	while (i < size) {
		int min = i;
		int j = i + 1;

		while (j < size) {
			if (tab[min] > tab[j]) {
				min = j;
			}
			j++;
		}
		int temp = tab[min];
		tab[min] = tab[i];
		tab[i] = temp;
	        i++;
	}
}
