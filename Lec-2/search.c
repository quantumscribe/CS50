#include <stdio.h>
#include <string.h>

int main(void)
{
	char *string[] = {"battleship", "cruiser", "destroyer", "frigate", "submarine"};
	printf("Enter the string u want to search: ");
	char search[100];
	scanf("%s", search);
	for (int i = 0, length = strlen(*string); i < length; i++)
	{
		if (strcmp(string[i], search) == 0)
		{
			printf("The string is found at index %d\n", i);
			return 0;
		}
	}
	printf("The string is not found\n");
}