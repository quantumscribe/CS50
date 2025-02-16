#include <stdio.h>

int main(void)
{
	// Initialize a pointer to a string literal "HI!"
	char *s = "HI!";
	
	// Print the first character of the string
	printf("%c\n", *s); // Output: H
	
	// Print the second character of the string
	printf("%c\n", *(s+1)); // Output: I
	
	// Print the third character of the string
	printf("%c\n", *(s+2)); // Output: !
}