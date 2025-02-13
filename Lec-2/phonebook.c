#include <stdio.h>

// This is a phonebook code using a structure in C

typedef struct
{
	char name[30];
	char phone[15];
} person;

int main(void)
{
	person people[3];
	#include <string.h>
	
	strcpy(people[0].name, "John");
	strcpy(people[0].phone, "1234567890");
	strcpy(people[1].name, "Jane");
	strcpy(people[1].phone, "0987654321");
	strcpy(people[2].name, "Joe");
	strcpy(people[2].phone, "5432167890");

	for (int i = 0; i < 3; i++)
	{
		printf("Name: %s\n", people[i].name);
		printf("Phone: %s\n", people[i].phone);
	}
}