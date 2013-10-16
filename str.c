#include <stdio.h>
#include <string.h>
#include <malloc.h>

int string_equal(char str1[], char str2[]);

int main(int argc, char *argv[]) {

	char lit[] = "alexander";
	char *str = (char *)malloc((strlen(lit) + 1)* sizeof(char));
	int i;
	for(i = 0; i < strlen(lit) + 1; i++) {
		str[i] = lit[i];
	}
	printf("%d\n", strlen(str));

	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", *str);
	printf("%c\n", *(str + sizeof(char)));

	free(str);

	char lit2[] = "Hello there!";
	char *str2 = strdup(lit2);
	printf("MEMADDR(lit2) = %p;\n", lit2);
	printf("MEMADDR(str2) = %p;\n", str2);
	printf("%s\n", str2);
	
	free(str2);

	return 0;
}

int string_equal(char *str1, char *str2) {
	return !strncmp(str1, str2,
		(strlen(str1) >= strlen(str2)) ? strlen(str1) : strlen(str2));
}