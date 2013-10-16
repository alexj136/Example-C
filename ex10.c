#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i;
	for(i = 0; i < argc; ++i) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	char *stuff[] = {"these", "are", "some", "words"};

	for(i = 0; i < 4; ++i)	{
		printf("%s ", stuff[i]);
	}
	printf("\n");
	return 0;
}