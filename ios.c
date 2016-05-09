#include <stdio.h>
#include <math.h>

void smart() {
	printf("Hello world!");
}

uint8_t b32decode(char* s) {
	return (s)? *s : s;
	// TODO: small chance of overflowing on systems with more than 256 cells of memory
}
