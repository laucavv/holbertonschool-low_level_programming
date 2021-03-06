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
 *_strdup - function that returns a pointer
 *@str: char
 * Return: s
 */

char *_strdup(char *str)
{
	int j, l;
	char *s;

	if (!str)
	{
		return (NULL);
	}

	l = _strlen(str) + 1;

	s = malloc(l * sizeof(char));
	if (!s)
	{
		return (NULL);

	}

	for (j = 0; j < l; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
