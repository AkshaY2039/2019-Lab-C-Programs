/*
	Array Sum (Pointers)
		Write a C Program to Calculate the Sum of the Array Elements using Pointer
*/
#include <stdio.h>

int main ()
{
	int arr[100], size;
	long sum = 0;

	scanf ("%d\n", &size);

	for (int i = 0, *p = arr; i < size; i++, p++)
	{
		scanf ("%d", &arr[i]);
		sum += *p;
	}

	printf ("Sum of Array : %li\n", sum);

	return 0;
}
