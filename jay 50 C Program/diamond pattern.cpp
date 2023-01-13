// C program to print full
// diamond shape pyramid
// Prints diamond pattern

#include <stdio.h>
void printDiamond(int n)
{
	int space = n - 1;

	for (int i = 0; i < n; i++)
	{
	
		for (int j = 0; j < space; j++)
			printf(" ");

		// Print the i+1 stars
		for (int j = 0; j <= i; j++)
			printf("* ");

		printf("\n");
		space--;
	}

	space = 0;

	for (int i = n; i > 0; i--)
	{
	
		for (int j = 0; j < space; j++)
			printf(" ");

		// Print the i stars
		for (int j = 0; j < i; j++)
			printf("* ");

		printf("\n");
		space++;
	}
}

int main()
{
	printDiamond(8);
	return 0;
}

