#include <stdio.h>

#include <string.h>

// doesnt work currently but fix it later.

int main(void)
{
	FILE *file = fopen("phonebook.CSV", "a");
	if (file == NULL)
	{
		return 1;
	}

	char name[10];
	char number[20];

	printf("Ente a name: ");
	scanf("%s", name);
	printf("Enter a number: ");
	scanf("%s", &number);

	fprintf(file, "%s,%s\n", name, number);
	fclose(file);
}