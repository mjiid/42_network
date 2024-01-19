#include <unistd.h>

// This was a taugh one :D
void *ft_print_memory(void *addr, unsigned int size) {
	
	if (size == 0) {
		return addr;
	}

	// Print out the address in hexadecimal!
	int p_size = sizeof(void*) * 2;
	unsigned long long value = (unsigned long long) addr;
	char buffer[p_size];
	for (int i = p_size - 1; i >= 0; i--) {
		int nibble = (value >> (i * 4)) & 0xF;
		buffer[p_size - 1 - i] = (nibble < 10) ? ('0' + nibble) : ('a' + nibble - 10);
	}

	buffer[p_size] = '\0';
	write(1, &buffer, sizeof(addr)*2);
	write(1, ":", 1);
	write(1, " ", 1);

	// Print out the content in hexadecimal:
	unsigned char *byteAddr = addr;

	for (unsigned int i = 0; i < size; i++) {
		unsigned char byteValue = byteAddr[i];

		// Convert the 1st nibble to ASCII:
		char high = (byteValue >> 4) & 0xF;
		char highChar = (high < 10) ? ('0' + high) : ('a' + high - 10);

		// Convert the 2nd nibble to ASCII!
		char low = (byteValue) & 0xF;
		char lowChar = (low < 10) ? ('0' + low) : ('a' + low - 10);

		write(1, &highChar, 1);
		write(1, &lowChar, 1);

		if ((i + 1) % 2 == 0 && i != size - 1) {
			write(1, " ", 1);
		}
	}
	
	write(1, " ", 1);

	for (unsigned int i = 0; i < size; i++) {
		unsigned char value = byteAddr[i];

		if ((int) value >= 32 && (int) value <= 126) {
			write(1, &value, 1);
		} else {
			write(1, ".", 1);
		}
	}

	return addr;
}

