#include <stdio.h>

void increment_at_reference(int *var) {
	(*var)++;
}

void increment_value(int var) {
	var++;
}

int main() {
	int i = 1;
	int j = 1;
	increment_at_reference(&i);
	increment_value(j);
	printf("%d, %d\n", i, j);
	return 0;
}