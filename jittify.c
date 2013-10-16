#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
 
int main(int argc, char *argv[]) {
	
	// Machine code
	unsigned char code[] = {
		
		// mov eax, 0
		0xb8, 0x00, 0x00, 0x00, 0x00,

		// ret
		0xc3
	};

	if (argc < 2) {
		fprintf(stderr, "Usage: jit1 <integer>\n");
		return 1;
	}

	// Overwrite immediate value "0" in the instruction with the user's value.
	// This will make our code:
	//     mov eax, <user's value>
	//     ret
	int num = atoi(argv[1]);
	memcpy(&code[1], &num, 4);

	// Allocate writable/executable memory. Note: real programs should not map
	// memory both writable and executable because it is a security risk.
	void *mem = mmap(NULL, sizeof(code), PROT_WRITE | PROT_EXEC,
		MAP_ANON | MAP_PRIVATE, -1, 0);
	memcpy(mem, code, sizeof(code));

	// The jit created function will return the user's value.
	int (*func)() = mem;
	printf("%d\n", func());

	// Return the mapped memory to the OS
	munmap(mem, sizeof(code));

	return 0;
}