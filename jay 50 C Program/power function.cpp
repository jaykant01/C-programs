// C program for power function
#include <stdio.h>

int power(int x, int n)
{
	
	if (n == 0)
		return 1;

	if (x == 0)
		return 0;
	
	return x * power(x, n - 1);
}

int main()
{
	int x = 2;
	int n = 3;


	printf("%d\n", power(x, n));
}

