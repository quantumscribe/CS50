#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Missing Comand Line Argument\n");
		return 1;
	}
	printf("Hello, %s\n", argv[1]);
}