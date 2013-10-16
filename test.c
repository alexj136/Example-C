#include <stdio.h>
#include <string.h>

char *t[] = {"a", "aa", "aaa", "aaaaa", "aaaaaa", "aaaaaaa"};

int main(int argc, char* argv[]) {
	int i;
	for(i = 0; i < 6; i++) printf("%d\n", strlen(t[i]));
	printf("===\n%d\n", sizeof(t));
	printf("%d\n===\n", sizeof(*t));


	printf("%d\n", in_valueless_tokens("you"));
	printf("%d\n", in_valueless_tokens("for"));
	printf("%d\n", in_valueless_tokens("<"));
	printf("%d\n", in_valueless_tokens("!"));
	return 0;
}

char *valueless_tokens[] = {"fn", "for", "if", "while", "print", "return",
	"else", "<", "<-", "<=", ">", ">=", "+", "++", "+=", "-", "--", "-=", "!=",
	"=", "{", "}", "(", ")", "*", "/", "%%",",", ";", "?", ":"};

/*
 * Does simple sequential search to determine if a given string is in the
 * valueless_tokens array
 */
int in_valueless_tokens(char *token) {
	int found = 0;
	int i = 0;
	while(!found && i < 31/*length of valueless_tokens*/) {
		if(str_equal(valueless_tokens[i], token)) found = 1;
		i++;
	}
	return found;
}

int str_equal(char *str1, char *str2) {
	// If they have different lengths, we can say immidiately that they differ
	if(strlen(str1) != strlen(str2)) return 0;
	// If they are she same length, we must use strncmp to compare them. strncmp
	// returns 0 for identical strings, and other ints for different ones, so we
	// negate the result.
	else return !strncmp(str1, str2, strlen(str1));
}