#include <stdio.h>
#include <string.h> // Include string.h for strcpy function

// This is a phonebook code using a structure in C

// Define a structure to store a person's name and phone number
typedef struct
{
	char name[30];  // Array to store the name
	char phone[15]; // Array to store the phone number
} person;

int main(void)
{
	// Declare an array of 3 person structures
	person people[3];

	// Copy names and phone numbers into the array of structures
	strcpy(people[0].name, "John");
	strcpy(people[0].phone, "1234567890");
	strcpy(people[1].name, "Jane");
	strcpy(people[1].phone, "0987654321");
	strcpy(people[2].name, "Joe");
	strcpy(people[2].phone, "5432167890");

	// Loop through the array and print each person's name and phone number
	for (int i = 0; i < 3; i++)
	{
		printf("Name: %s\n", people[i].name);   // Print the name
		printf("Phone: %s\n", people[i].phone); // Print the phone number
	}

	return 0; // Return 0 to indicate successful execution
}