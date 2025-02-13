#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	char s[10];
	printf("Enter a string: ");
	scanf("%s", s);

	char *t = malloc(strlen(s) + 1);
	for (int i = 0, length = strlen(s); i <= length; i++)
	{
		t[i] = s[i];
	}
	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	printf("%s\n", s);
	printf("%s\n", t);
}