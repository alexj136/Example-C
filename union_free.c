#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef union {
	char *str;
	int i;
} my_union;

int main(int argc, char const *argv[]) {

	my_union *one = malloc(sizeof(my_union));
	one->str = strdup("Well hello there!");
	free(one->str);
	free(one);

	my_union *two = malloc(sizeof(my_union));
	two->i = 3110;
	free(two);

	my_union three;
	three.str = strdup("lol!");
	free(three.str);

	my_union four;
	four.i = 1;

	return 0;
}