// C program to add 2 matrices
// the above approach
#include <stdio.h>
#define N 4

void add(int A[][N], int B[][N],
		int C[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			C[i][j] = A[i][j] + B[i][j];
}

int main()
{
	int A[N][N] = {{1, 1, 1, 1},
				{2, 2, 2, 2},
				{3, 3, 3, 3},
				{4, 4, 4, 4}};

	int B[N][N] = {{1, 1, 1, 1},
				{2, 2, 2, 2},
				{3, 3, 3, 3},
				{4, 4, 4, 4}};

	// To store result
	int C[N][N];
	int i, j;
	add(A, B, C);

	printf("Result matrix is ");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		printf("%d ", C[i][j]);
		printf("");
	}

	return 0;
}

