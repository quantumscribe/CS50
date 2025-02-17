#include <stdio.h>
#include <string.h>

// This program appends a new contact to the phonebook.CSV file

int main(void)
{
	// Open the file "phonebook.CSV" in append mode
	FILE *file = fopen("phonebook.CSV", "a");
	if (file == NULL)
	{
		// If the file cannot be opened, return an error code
		return 1;
	}

	// Declare variables to store the name and number
	char name[10];
	char number[20];

	// Prompt the user to enter a name
	printf("Enter a name: ");
	// Read the name from standard input
	scanf("%s", name);

	// Prompt the user to enter a number
	printf("Enter a number: ");
	// Read the number from standard input
	scanf("%s", number);

	// Write the name and number to the file in CSV format
	fprintf(file, "%s,%s\n", name, number);

	// Close the file
	fclose(file);
}