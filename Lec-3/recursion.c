// same patter as pattern.c but using recursion

#include <stdio.h>

void draw(int n);

int main()
{
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	draw(n);
	return 0;
}

void draw(int n)
{
	// if nothing to draw (basecase)
	if (n == 0)
	{
		return;
	}
	else
	{
		//print pyramid of height n-1
		draw(n - 1);

		//print one more row
		for (int i = 0; i < n; i++)
		{
			printf("#");
		}
		printf("\n");
	}
}