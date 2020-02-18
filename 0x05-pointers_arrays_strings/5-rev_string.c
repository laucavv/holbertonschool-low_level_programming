#include "holberton.h"
/**
 *rev_string - prints a string reverse
 *@s: value
 */
void rev_string(char *s)
{
	int i, j;
	char p;

	j = 0;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = (i - 1); i > j; i--)
	{
		p = s[j];
		s[j] = s[i];
		s[i] = p;
		j++;
	}
}
