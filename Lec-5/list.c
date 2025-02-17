#include <stdio.h>
#include <stdlib.h>

// Define the node structure
typedef struct node
{
	int number;
	struct node *next;
} node;

int main(int argc, char *argv[])
{
	// Initialize the list to be empty
	node *list = NULL;

	// Iterate over each command-line argument
	for (int i = 1; i < argc; i++)
	{
		// Convert the argument to an integer
		int number = atoi(argv[i]);
		
		// Allocate memory for a new node
		node *n = malloc(sizeof(node));

		// Check if memory allocation was successful
		if (n == NULL)
		{
			// Free memory allocated so far (not implemented here)
			return 1;
		}

		// Initialize the new node
		n->number = number;
		n->next = NULL;

		// Insert the new node at the beginning of the list
		n->next = list;
		list = n;
	}

	// Print the entire list
	node *ptr = list;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->number);
		ptr = ptr->next;
	}

	// Free the allocated memory (not implemented here)
}