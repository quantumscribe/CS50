#include <stdio.h>
#include <string.h>

int main(void)
{
	char words[2][10];
	strcpy(words[0], "Hi!");
	strcpy(words[1], "Bye!");

	printf("%s\n", words[0]);
	printf("%s\n", words[1]);

	return 0;
}
