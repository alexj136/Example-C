#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main() {
	
	char *s = strdup("hello");
	printf("%c\n", *s);
	printf("%c\n", *(s++));
	printf("%c\n", *s);



	return 0;
}