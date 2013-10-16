#include <stdio.h>

int main() {

	int areas[] = {10, 34, 23, 76, 25};
	areas[1] = 39;
	char name[] = "Alex";
	char full_name[] = {
		'A', 'l', 'e', 'x', 'a', 'n', 'd', 'e', 'r', ' ', 
		'P', 'a', 'u', 'l', ' ',
		'J', 'e', 'f', 'f', 'e', 'r', 'y', '\0'
	};

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
	printf("areas[10] = %d areas[1] = %d\n", areas[10], areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name: %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

	printf("The size of full_name: %ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

	printf("name = \"%s\", full_name = \"%s\"\n", name, full_name);
	printf("Segf = %c\n", full_name[204]);

	return 0;
}