#include <stdio.h>

/* I know multi-line comments */
int main(int argc, char* argv) {

	int distance = 100;
	float power = 3.1415f;
	double super_power = 53942.3245;
	char initial = 'P';
	char first_name[] = "Alexander";
	char last_name[] = "Jeffery";

	// I know single-line comments
	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("My initial is %c.\n", initial);
	printf("My first name is %s.\n", first_name);
	printf("My last name is %s.\n", last_name);
	printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
	printf(""); // Does El Zilcho

	return 0;
}