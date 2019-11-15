/*
	Decimal to Binary and Number of Ones (Control Statements)
		Write a C Program to Convert a Decimal Number to Binary and Count the Number of 1s
*/
#include <stdio.h>

int main ()
{
	int dec_num, num_ones = 0;
	long binary = 0, place = 1;

	scanf ("%d", &dec_num);

	int temp = dec_num;
	while (temp)
	{
		binary += ((temp % 2) * place);
		num_ones += (temp % 2);
		temp /= 2;
		place *= 10;
	}

	printf ("%d (Decimal) = %li (Binary) with %d Ones\n", dec_num, binary, num_ones);

	return 0;
}
