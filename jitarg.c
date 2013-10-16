#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

typedef struct {

	int *arg_ptrs;
	int num_args_ptrs;
	int (*func_ptr)();

} FuntionHeader;

int main(int argc, char *argv[]) {
	
	// Machine code
	unsigned char code[] = {
		// mov eax, 0
		0xb8, 0x00, 0x00, 0x00, 0x00,

		// mov eax, 0
		0xb8, 0x00, 0x00, 0x00, 0x00,

		// addl %ebx, %eax
		0x01, 0xD8,

		// ret
		0xC3
	};

	// Allocate writable/executable memory. Note: real programs should not map
	// memory both writable and executable because it is a security risk.
	void *mem = mmap(NULL, sizeof(code), PROT_WRITE | PROT_EXEC,
		MAP_ANON | MAP_PRIVATE, -1, 0);
	memcpy(mem, code, sizeof(code));

	// The jit created function will return the user's value + 5, having been
	// passed as argument an
	int (*func)(int32_t a, int32_t b) = mem;
	int result = func(5, 4);
	printf("%d\n", result);

	// Return the mapped memory to the OS
	munmap(mem, sizeof(code));

	return 0;
}