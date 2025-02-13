# include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);
int mod(int a, int b);


int main(void)
{
	int a, b;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	printf(" 1. Addition(+)\n 2. Subtraction(-)\n 3. Multiplication(*)\n 4. Division(/)\n 5. Modulus(%%)\n");
	printf("Enter the Operation you want to perform:");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("Addition of %d and %d is %d\n", a, b, add(a, b));
			break;

		case 2:
			printf("Subtraction of %d and %d is %d\n", a, b, sub(a, b));
			break;

		case 3:
			printf("Multiplication of %d and %d is %d\n", a, b, mul(a, b));
			break;

		case 4:	
			printf("Division of %d and %d is %f\n", a, b, div(a, b));
			break;

		case 5:
			printf("Modulus of %d and %d is %d\n", a, b, mod(a, b));
			break;

		default:
			printf("Invalid Choice");
			
	}
	return 0;
}

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

float div(int a, int b)
{
	return a/b;
}

int mod(int a, int b)
{
	return a%b;
}


