#include <stdio.h>
#include <string.h>

int main(void)
{
	// Declare a 2D array of characters with 2 rows and 10 columns
	char words[2][10];

	// Copy the string "Hi!" into the first row of the array
	strcpy(words[0], "Hi!");

	// Copy the string "Bye!" into the second row of the array
	strcpy(words[1], "Bye!");

	// Print the first string in the array
	printf("%s\n", words[0]);

	// Print the second string in the array
	printf("%s\n", words[1]);

	return 0; // Indicate that the program ended successfully
}
