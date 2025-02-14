#include <stdio.h> // Include the standard input/output library

int main(int argc, char *argv[])
{
	// Loop through each command-line argument
	for(int i = 0; i < argc; i++)
	{
		// Print each argument followed by a newline
		printf("%s\n", argv[i]);
	}
	
	return 0; // Return 0 to indicate successful execution
}