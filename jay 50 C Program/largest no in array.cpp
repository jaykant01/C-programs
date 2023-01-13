// C program to find maximum in
// arr[] of size n
#include <stdio.h>

// C function to find maximum
// in arr[] of size n
int largest(int arr[], int n)
{
	int i;
	
	int max = arr[i];
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
	int arr[] = {10, 324, 45, 90, 9808};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Largest in given array is %d",
			largest(arr, n));
	return 0;
}
