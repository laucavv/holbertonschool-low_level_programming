#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen -  returns the length of a string.
 *@s: char
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
/**
 *str_concat - function that returns a pointer
 *@s1: char
 *@s2: char
 * Return: dest
 */


char *str_concat(char *s1, char *s2)
{
	char *dest;
	int len1 = 0, len2 = 0, size = 0, j;

	if (s1)
	{
		len1 = _strlen(s1);
	}
	if (s2)
	{
		len2 = _strlen(s2) + 1;
	}
	size = len1 + len2;
	dest = malloc(size * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		if (j < len1)
		{
			dest[j] = s1[j];

		}
		else if (j >= len1 && j < size)
		{
			dest[j] = s2[j - len1];

		}
	}
	dest[j] = '\0';
	return (dest);


}
