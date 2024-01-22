#include <unistd.h>


int main(int argc, char* argv[]) {
	
	for (int i = 1; i < argc; i++) {
		int size = 0;
		while (argv[i][size] != '\0') {
			size++;
		}
		write(1, argv[i], size);
		write(1, "\n", 1);
	}
	return 0;
}
