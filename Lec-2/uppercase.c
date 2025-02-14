#include <stdio.h>   // Include standard input/output library
#include <ctype.h>   // Include ctype library for character handling functions
#include <string.h>  // Include string library for string handling functions

int main()
{
	char s[10];  // Declare a character array to store the input string
	printf("Before: ");  // Prompt the user for input
	scanf("%s", s);  // Read the input string from the user
	printf("After: ");  // Print the label for the converted string
	for (int i = 0, n = strlen(s); i < n; i++)  // Loop through each character in the string
	{
		printf("%c", toupper(s[i]));  // Convert each character to uppercase and print it
	}
	return 0;  // Return 0 to indicate successful execution
}
