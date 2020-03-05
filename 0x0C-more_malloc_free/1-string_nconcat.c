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
 * string_nconcat - function that concatenates two strings
 *@s1: char
 *@s2: char
 *@n: size
 * Return: dest
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int len1 = 0, len2 = 0, size = 0, j;

	if (s1 || s2)
	{
		len1 = _strlen(s1);
		len2 = _strlen(s2);
	}
	if (n >= len2)
	{
		size = len1 + (len2 + 1);
	}
	else
	{
		size = len1 + (n + 1);
	}
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
		else if (j >= len1 && (j < size || j < n))
		{
			dest[j] = s2[j - len1];
		}
	}
	dest[j] = '\0';
	return (dest);
}
