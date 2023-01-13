// C Program to Demonstrate
// a Hollow Star Pyramid
#include <stdio.h>

int main()
{
	int i, space, n = 5, j = 0;

	for (i = 0; i < n - 1; i++) {

		// second for loop is used to print spaces
		for (space = 1; space < n - i; space++) {
			printf(" ");
		}
		
		for (j = 0; j <= 2 * i; j++) {
			if (j == 0 || j == 2 * i)
				printf("*");
			else
				printf(" ");
		}
		// print the new line after every row
		printf("\n");
	}
	// used to print last row
	for (i = 0; i < 2 * n - 1; i++) {
		printf("*");
	}
	return 0;
}

