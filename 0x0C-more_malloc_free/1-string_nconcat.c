#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
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
	unsigned int len1, size, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2) + 1;
	if (n >= len2)
	{
		n = len2;
	}
	size = len1 + (n + 1);
	dest = malloc(size * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = s2[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
