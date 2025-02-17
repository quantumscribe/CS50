#include <stdio.h>   // Include standard input-output library
#include <stdlib.h>  // Include standard library for memory allocation functions

int main(void)
{
	// Allocate memory for an array of 3 integers
	int *x = malloc(3 * sizeof(int));
	
	// Check if memory allocation was successful
	if (x == NULL)
	{
		return 1; // Return an error code if memory allocation failed
	}

	// Assign values to the allocated memory
	x[0] = 72;  // First element
	x[1] = 73;  // Second element
	x[2] = 33;  // Third element

	// Free the allocated memory
	free(x);

	return 0; // Return 0 to indicate successful execution
}