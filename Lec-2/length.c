#include <stdio.h>
#include <string.h>

// Function prototype for string_length
void string_length(char *name);

int main(void)
{
	// Declare a character array to store the input string
	char name[10];

	// Prompt the user to enter a string
	printf("Enter the string: ");
	
	// Read the input string from the user
	scanf("%s", name);

	// Print the output string
	printf("output string: ");
	
	// Loop through each character of the string and print it
	for (int i = 0, n = strlen(name); i < n; i++)
	{
		printf("%c", name[i]);
	}

	// Print a newline character at the end
	printf("\n");
}
