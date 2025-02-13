#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[20];
	char t[20];

	printf("Enter a string s: ");
	scanf("%s", s);
	printf("Enter a string t: ");
	scanf("%s", t);

	printf("s : %p\n", s);
	printf("t : %p\n", t);
}