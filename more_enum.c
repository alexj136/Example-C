#include <stdio.h>

typedef enum {
	A, B, C
} abc;

typedef enum {
	D, E, F
} def;

int main(int argc, char const *argv[]) {
	
	abc bar = D;
	def foo = A;

	return 0;
}