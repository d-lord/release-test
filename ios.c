#include <stdint.h>
#include <stdio.h>

void smart() {
	printf("Hello world!");
}

uintptr_t b32decode(char* s) {
	return (s)? *s : (uintptr_t) s;
	// TODO: small chance of overflowing on systems with more than 256 cells of memory
}

int random() {
	return 4;
}
