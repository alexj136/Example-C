#include <stdio.h>

int main(int argc, char *argv[]) {

	int a[4] = {0};
	int i;
	for(i = 0; i < 4; i++) {
		a[i] = i + 1;
	}
	for(i = 0; i < 4; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	char b[4] = {'a'};
	for(i = 0; i < 4; i++) {
		printf("%c ", b[i]);
	}
	printf("\n");

	char *thing = "lol";
	printf("thing = %s\n", thing);

	return 0;
}