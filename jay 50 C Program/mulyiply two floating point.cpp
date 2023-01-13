// C program to multiply two floating point numbers
#include <stdio.h>

int main()
{
	float A, B, product = 0.0f;

	printf("Enter two floating numbers A and B : \n");

	scanf("%f%f", &A, &B);
	
	product = A * B;

	printf("Product of A and B is: %f", product);

	return 0;
}

