#include <stdio.h>

int main(int argc, char *argv[])
{
	// Variable to store the number of rows for the triangle
	int n;
	
	// Prompt the user to enter the number of rows
	printf("Enter the number of rows: ");
	
	// Read the input value and store it in variable n
	scanf("%d", &n);

	// Loop through each row
	for (int i = 1; i <= n; i++)
	{
		// Loop to print the appropriate number of '#' characters for the current row
		for (int j = 0; j < i; j++)
		{
			printf("#");
		}
		// Print a newline character after each row
		printf("\n");
	}
}