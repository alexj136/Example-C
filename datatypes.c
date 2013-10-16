#include <stdio.h>
#include <inttypes.h>

int main() {
	uint32_t a = 0x040;
	uint16_t b = 0x40;
	uint8_t  c = 0x40;
	int32_t  d = 0x40;
	int16_t  e = 0x40;
	int8_t   f = 0x40;
	printf("%d\n", a);
	printf("%c\n", a);
	printf("%d\n", b);
	printf("%c\n", b);
	printf("%d\n", c);
	printf("%c\n", c);
	printf("%d\n", d);
	printf("%c\n", d);
	printf("%d\n", e);
	printf("%c\n", e);
	printf("%d\n", f);
	printf("%c\n", f);
	return 0;
}