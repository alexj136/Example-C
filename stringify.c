#include <stdio.h>

#define MACRO_A(arg) puts(#arg);
#define MACRO_B(arg) puts("o #arg k");
#define MACRO_C(arg) puts("o "#arg" k");

int main(int argc, char const *argv[])
{
	MACRO_A(lol);
	MACRO_B(lol);
	MACRO_C(lol);
	
	return 0;
}