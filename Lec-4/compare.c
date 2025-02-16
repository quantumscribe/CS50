#include <stdio.h>
#include <string.h>

int main(void)
{
	// Declare two character arrays to store the input strings
	char s[20];
	char t[20];

	// Prompt the user to enter the first string and store it in array s
	printf("Enter a string s: ");
	scanf("%s", s);

	// Prompt the user to enter the second string and store it in array t
	printf("Enter a string t: ");
	scanf("%s", t);

	// Print the memory address of the first character of array s
	printf("s : %p\n", s);

	// Print the memory address of the first character of array t
	printf("t : %p\n", t);
}