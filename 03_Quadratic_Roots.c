/*
	Quadratic Roots (Operators and Conditional Statements)
		Write a C program for finding roots (in 2 decimal point precision) of a quadratic equation.
*/
#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b, c;

	scanf ("%d %d %d", &a, &b, &c);

	printf ("The roots for %d(x^2) + %d(x) + %d = 0 are ", a, b, c);

	long discriminant = (b * b) - (4 * a * c);
	if (discriminant >= 0)
	{
		float root1, root2;
		root1 = (-b + sqrt (discriminant)) / (2 * a);
		root2 = (-b - sqrt (discriminant)) / (2 * a);
		printf ("%0.2f and %0.2f.\n", root1, root2);
	}
	else
		printf ("imaginary.\n");

	return 0;
}
