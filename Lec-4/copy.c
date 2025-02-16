#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	// Declare a character array to store the input string
	char s[10];
	printf("Enter a string: ");
	// Read a string from the user
	scanf("%s", s);

	// Allocate memory for a new string that is the same length as the input string plus one for the null terminator
	char *t = malloc(strlen(s) + 1);
	// Copy each character from the input string to the new string
	for (int i = 0, length = strlen(s); i <= length; i++)
	{
		t[i] = s[i];
	}
	// If the new string is not empty, convert the first character to uppercase
	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	// Print the original string
	printf("%s\n", s);
	// Print the new string with the first character in uppercase
	printf("%s\n", t);

	// Free the allocated memory
	free(t);
}