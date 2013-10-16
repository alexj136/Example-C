#include <stdio.h>

typedef enum {

	// The error token
	ERROR,

	// Tokens that carry associated values
	IDENTIFIER,
	LITERAL,	

	// Keywords
	FN,
	FOR,
	WHILE,
	IF,
	ELSE,
	PRINT,
	RETURN,
	
	// Boolean operations
	EQUAL,
	NOT_EQUAL,
	LESS_THAN,
	LESS_OR_EQUAL,
	GREATER_THAN,
	GREATER_OR_EQUAL,

	// Arithmetic operations
	PLUS,
	MINUS,
	MULTIPLY,
	DIVIDE,
	MODULO,

	// Assignment operators
	ASSIGNMENT,
	INCREMENT,
	DECREMENT,
	INCREMENT_BY,
	DECREMENT_BY,

	// Brackets
	OPEN_BRACE,
	CLOSE_BRACE,
	OPEN_PAREN,
	CLOSE_PAREN,

	// Delimiters
	COMMA,
	SEMICOLON,

	// Ternary operator tokens
	QUESTION_MARK,
	COLON

} token_type;

typedef enum {
	well,
	hello,
	there
} lol;

int main(int argc, char const *argv[]) {

	printf("%d\n", well);
	printf("%d\n", hello);
	printf("%d\n", there);

	printf("%d\n", ERROR);
	printf("%d\n", IDENTIFIER);
	printf("%d\n", LITERAL);
	printf("%d\n", FN);
	printf("%d\n", FOR);
	printf("%d\n", WHILE);
	printf("%d\n", IF);
	printf("%d\n", ELSE);
	printf("%d\n", PRINT);
	printf("%d\n", RETURN);
	printf("%d\n", EQUAL);
	printf("%d\n", NOT_EQUAL);
	printf("%d\n", LESS_THAN);
	printf("%d\n", LESS_OR_EQUAL);
	printf("%d\n", GREATER_THAN);
	printf("%d\n", GREATER_OR_EQUAL);
	printf("%d\n", PLUS);
	printf("%d\n", MINUS);
	printf("%d\n", MULTIPLY);
	printf("%d\n", DIVIDE);
	printf("%d\n", MODULO);
	printf("%d\n", ASSIGNMENT);
	printf("%d\n", INCREMENT);
	printf("%d\n", DECREMENT);
	printf("%d\n", INCREMENT_BY);
	printf("%d\n", DECREMENT_BY);
	printf("%d\n", OPEN_BRACE);
	printf("%d\n", CLOSE_BRACE);
	printf("%d\n", OPEN_PAREN);
	printf("%d\n", CLOSE_PAREN);
	printf("%d\n", COMMA);
	printf("%d\n", SEMICOLON);
	printf("%d\n", QUESTION_MARK);
	printf("%d\n", COLON);
	
	return 0;
}