#include <stdio.h>

int main(void)
{
	int x, y; // Declare two integer variables x and y

	// Prompt the user to enter the value of x
	printf("Enter x: ");
	// Read the value of x from the user input
	scanf("%d", &x);

	// Prompt the user to enter the value of y
	printf("Enter y: ");
	// Read the value of y from the user input
	scanf("%d", &y);

	// Using type casting to convert integers to floats to avoid truncation during division
	float z = (float)x / (float)y;

	// Print the result of the division with 20 decimal places
	printf("The division of x and y is %.20f\n", z);

	return 0; // Return 0 to indicate successful execution
}