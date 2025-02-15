// Program to draw a pyramid pattern using recursion

#include <stdio.h>

// Function prototype
void draw(int n);

int main()
{
	int n;
	// Prompt user for the number of rows
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	// Call the draw function
	draw(n);
	return 0;
}

// Recursive function to draw the pyramid
void draw(int n)
{
	// Base case: if nothing to draw
	if (n == 0)
	{
		return;
	}
	else
	{
		// Recursive call to draw pyramid of height n-1
		draw(n - 1);

		// Print one more row of the pyramid
		for (int i = 0; i < n; i++)
		{
			printf("#");
		}
		// Move to the next line after printing the row
		printf("\n");
	}
}