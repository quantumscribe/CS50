#include <stdio.h>

int main(void)
{
	// Declare a character array 's' with a size of 90 to store the input string
	char s[90];
	
	// Prompt the user to enter a string
	printf("s: ");
	
	// Read the input string from the user and store it in the array 's'
	// Note: We do not use &s because 's' is already a pointer to the first character of the array
	scanf("%s", s);
	
	// Print the input string
	printf("s: %s\n", s);
}