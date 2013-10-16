#include <stdio.h>

/*
 * ASM_ADD is a macro that uses inline assembly to perform addition. The
 * parameters op1 and op2 can be integer literals or integer variables. dest
 * must be a previously declared integer variable.
 */
#define ASM_ADD(op1, op2, dest) do {   \
			asm("movl %%eax, %%ecx;"   \
		  		"addl %%ebx, %%ecx;"   \
        		: "=c" (dest)          \
        		: "a" (op1), "b" (op2) \
        		:                      \
        		);                     \
			} while(0);

int main(int argc, char const *argv[]) {
	int a = 1, b = 3, c;
	asm("movl %%eax, %%ecx;"
		"addl %%ebx, %%ecx;"
        : "=c" (c)
        : "a" (a), "b" (b)
        : // No clobbered registers
        );
	printf("%d\n", c);

	int x = 1, y = 10, z;
	ASM_ADD(x, y, z);
	printf("%d\n", z);

	int w;
	ASM_ADD(10, 20, w);
	printf("%d\n", w);

	return 0;
}