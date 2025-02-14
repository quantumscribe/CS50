#include <stdio.h>

int main(void)
{
	int n, s;

	// Prompt user to enter the size of the array
	printf("Enter size of array: ");
	scanf("%d", &n);

	// Declare an array of size n
	int arr[n];

	// Loop to get array elements from the user
	for (int i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	// Print the array elements
	printf("Array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// Prompt user to enter the element to search for
	printf("Enter the element to search: ");
	scanf("%d", &s);

	// Linear search for the element s in the array
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == s)
		{
			// If element is found, print the index and break the loop
			printf("Element found at index %d\n", i);
			break;
		}
		if (i == n - 1)
		{
			// If loop completes and element is not found, print not found message
			printf("Element not found\n");
		}
	}
}