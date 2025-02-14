#include <stdio.h>
#include <string.h>

int main(void)
{
	// Array of strings to search from
	char *string[] = {"battleship", "cruiser", "destroyer", "frigate", "submarine"};
	
	// Prompt user to enter the string to search
	printf("Enter the string you want to search: ");
	
	// Variable to store the user input
	char search[100];
	scanf("%s", search);
	
	// Loop through the array of strings
	for (int i = 0, length = sizeof(string) / sizeof(string[0]); i < length; i++)
	{
		// Compare each string in the array with the user input
		if (strcmp(string[i], search) == 0)
		{
			// If a match is found, print the index and exit
			printf("The string is found at index %d\n", i);
			return 0;
		}
	}
	
	// If no match is found, print a message
	printf("The string is not found\n");
}