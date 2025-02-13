#include <stdio.h>
#include <string.h>

void string_length(char *name);


	int main(void)
{
	char name[10];
	printf("Enter the string: ");
	scanf("%s", name);
	printf("output string: ");
	for (int i = 0, n = strlen(name); i < n; i++)
	{
		printf("%c", name[i]);
	}

	printf("\n");
}

