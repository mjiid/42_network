#include <unistd.h>

int main(int argc, char* argv[]) {
	int size = 0;
	while (argv[0][size] != '\0') {
		size++;
	}
	write(1, argv[0], size);
	write(1, "\n", 1);
	return 0;
}
