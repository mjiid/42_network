#include <unistd.h>

int main(int argc, char* argv[]) {
	
	for(int i = argc - 1; i > 0; i--) {
		int size = 0;
		while (argv[i][size] != '\0') {
			size++;
		}
		write(1, argv[i], size);
		write(1, "\n", 1);
	}

	return 0;
}
