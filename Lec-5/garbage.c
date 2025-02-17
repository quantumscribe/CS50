#include <stdio.h>

int main(void)
{
	// Declare an array of integers with 1024 elements
	int score[1024];

	// Loop through each element of the array
	for (int i = 0; i < 1024; i++)
	{
		// Print the value of the current element
		// Note: The array is uninitialized, so it will print garbage values
		printf("%i\n", score[i]);
	}
}