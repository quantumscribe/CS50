#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

	char s[10];
	printf("Before: ");
	scanf("%s", s);
	printf("After: ");
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		printf("%c", toupper(s[i])); // toupper() is a function that converts lowercase to uppercase imported from ctype.h
	}
	return 0;
}