#include <stdio.h>

int main(void)
{
int x,y;

printf("Enter x: ");
scanf("%d", &x);
printf("Enter y: ");
scanf("%d", &y);
// Using type casting to battle truncation.
float z = (float)x / (float)y;
printf("The division of x and y is %.20f\n", z);


}