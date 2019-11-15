/*
	Display Source Code (Files and Command line arguments)
		Write a C Program to display its own Source Code as its Output along with number of lines and words
*/
#include <stdio.h>

int main ()
{
	FILE *file;
	char c;

	file = fopen (__FILE__, "r");
	c = getc (file);
	while (c != EOF)
	{
		printf("%c", c);
		c = getc (file);
	}
	fclose (file);

	return 0;
}
