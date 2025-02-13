#include <stdio.h>

int main(void)
{
	int n, s;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Enter the element to search: ");
	scanf("%d", &s);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == s)
		{
			printf("Element found at index %d\n", i);
			break;
		}
		if (i == n - 1)
		{
			printf("Element not found\n");
		}
	}
}