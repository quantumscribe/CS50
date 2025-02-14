#include <stdio.h>

int main(int argc, char *argv[])
{
	// Check if the number of command line arguments is not equal to 2
	if (argc != 2)
	{
		// Print an error message if the required argument is missing
		printf("Missing Command Line Argument\n");
		// Return a non-zero value to indicate an error
		return 1;
	}
	// Print a greeting message with the provided command line argument
	printf("Hello, %s\n", argv[1]);
	// Return 0 to indicate successful execution
	return 0;
}