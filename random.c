#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
	printf("RAND_MAX = %d\n", RAND_MAX);
	printf("Some random numbers:\n");
	int i; for(i = 0; i < 10; i++) printf("%d ", rand() % 100);
	printf("\n");
	return 0;
}