#include <stdio.h>

// Function to perform binary search
int binary_search(int array[], int length, int x) {
	int low = 0;
	int high = length - 1;

	while (low <= high) {
		int mid = (low + high) / 2; // Calculate the middle index

		if (array[mid] == x) {
			return mid; // Element found at mid index
		} else if (array[mid] < x) {
			low = mid + 1; // Search in the right half
		} else {
			high = mid - 1; // Search in the left half
		}
	}

	return -1; // Element not found
}

int main(void) {
	int x;
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Sorted array
	printf("Enter the number you want to search: ");
	scanf("%d", &x); // Read the number to search
	int length = sizeof(array) / sizeof(array[0]); // Calculate the length of the array

	// Perform binary search
	int result = binary_search(array, length, x);

	if (result != -1) {
		printf("Element found at index %d\n", result); // Print the index if element is found
	} else {
		printf("Element not found\n"); // Print not found message
	}

	return 0;
}