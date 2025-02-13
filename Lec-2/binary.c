#include <stdio.h>

// code for binary search

int main(void)
{
	int x;
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("Enter the number you want to search: ");
	scanf("%d", &x);
	int length = sizeof(array)/sizeof(array[0]);
	// the sizeof operator returns the size of the array in bytes
	printf("Length of array: %d\n", length);
	int mid = length / 2;

	for(int i = 0; i < length; i++)
	{
		if(array[mid] == x)
		{
			printf("Element found at index %d\n", mid);	
		}
		else if(array[mid] > x)
		{
			mid = mid / 2;
			

		}
	}
}