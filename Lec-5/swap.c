#include <stdio.h>

// Function prototype for swap
void swap(int *a, int *b);

int main(void)
{
	int x = 1;
	int y = 2;

	// Print initial values of x and y
	printf("x is %i and y is %i\n", x, y);

	// Call swap function to swap values of x and y
	swap(&x, &y);

	// Print values of x and y after swapping
	printf("x is %i and y is %i\n", x, y);
}

// Function to swap values of two integers
void swap(int *a, int *b)
{
	int tmp;

	// Store the value of a in tmp
	tmp = *a;

	// Assign the value of b to a
	*a = *b;

	// Assign the value of tmp (original value of a) to b
	*b = tmp;
}