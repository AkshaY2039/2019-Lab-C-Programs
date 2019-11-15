/*
	Vowels and Consonants (One dimensional arrays and String)
		Write a C Program to Find the count of Vowels and Consonants in a String
*/
#include <stdio.h>

char vowels_array[] = "AEIOUaeiou";

int isvowel (char c)
{
	for (int i = 0; vowels_array[i] != '\0'; ++i)
	{
		if (vowels_array[i] == c)
			return 1;
	}

	return 0;
}

int isalphabet (char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a') && (c <= 'z'))
		return 1;

	return 0;
}

int main ()
{
	int vowels = 0, consonants = 0;
	char a[100];

	scanf ("%[^\n]s", a);

	for (int i = 0; a[i] != '\0'; ++i)
	{
		if (isvowel (a[i]))
			vowels++;
		else
			consonants += isalphabet (a[i]);
	}

	printf ("Vowels = %d and Consonants = %d.\n", vowels, consonants);

	return 0;
}
