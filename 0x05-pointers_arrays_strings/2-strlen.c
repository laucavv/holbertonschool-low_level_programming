#include "holberton.h"
/**
 * _strlen -  returns the length of a string.
 *@s: string
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}

