#include "holberton.h"
/**
 *rev_string - prints a string reverse
 *@s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;
	char p;

	j = 0;

	for (i = 8; i >= j; i--)
	{
		p = s[j];
		s[j] = s[i];
		s[i] = p;
		j++;

	}
}
