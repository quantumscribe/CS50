#include <stdio.h>

int main(void)
{
	char s[90];
	printf("s: ");
	scanf("%s", s); // not using &s because s is already a pointer/address to the first charecter of the string.
	printf("s: %s\n", s);
}