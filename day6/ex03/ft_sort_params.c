#include <unistd.h>

int compareString(char str1[], char str2[]) {
	int i;

	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
		if (str1[i] < str2[i]) return -1;
		else if (str1[i] > str2[i]) return 1;
	}

	if (str1[i] == '\0' && str2[i] == '\0') {
		return 0;
	} else if (str1[i] == '\0') {
		return -1; // str1 is smaller
	} else {
		return 1;  // str1 is larger
	}

}


void swapString(char str1[], char str2[]) {
	char temp[50];
	int i;
	
	// Compy str1 to temp!
	for (i = 0; str1[i] != '\0'; i++) {
		temp[i] = str1[i];
	}
	temp[i] = '\0';

	// Copy str2 to str1:
	for (i = 0; str2[i] != '\0'; i++) {
		str1[i] = str2[i];
	}
	str1[i] = '\0';

	// Copy temp tp str2:
	for (i = 0; temp[i] != '\0'; i++) {
		str2[i] = temp[i];
	}
	str2[i] = '\0';
}


int main(int argc, char* argv[]) {
	// Sort the command line arguments:
	for (int i = 1; i < argc; i++) {
		for (int j = 1; j < argc - i; j++) {
			if (compareString(argv[j], argv[j+1]) > 0) swapString(argv[j], argv[j+1]);
		}
	}

	// Print out to the screen:
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
