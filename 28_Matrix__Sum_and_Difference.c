/*
	Matrix : Sum and Difference (Two dimensional arrays)
		Write a C Program to Calculate the Sum & Difference of the Matrices
*/
#include <stdio.h>

int main ()
{
	int matrixA[100][100], matrixB[100][100];
	int row, column;

	scanf ("%d %d", &row, &column);

	for (int r = 0; r < row; r++)
		for (int c = 0; c < column; c++)
			scanf ("%d", &matrixA[r][c]);
	for (int r = 0; r < row; r++)
		for (int c = 0; c < column; c++)
			scanf ("%d", &matrixB[r][c]);

	printf ("Matrix A :\n");
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < column; c++)
			printf ("%10d", matrixA[r][c]);
		printf ("\n");
	}

	printf ("Matrix B :\n");
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < column; c++)
			printf ("%10d", matrixB[r][c]);
		printf ("\n");
	}

	printf ("Sum Matrix :\n");
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < column; c++)
			printf ("%10d", matrixA[r][c] + matrixB[r][c]);
		printf ("\n");
	}

	printf ("Difference Matric :\n");
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < column; c++)
			printf ("%10d", matrixA[r][c] - matrixB[r][c]);
		printf ("\n");
	}

	return 0;
}
