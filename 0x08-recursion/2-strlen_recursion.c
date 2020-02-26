#include "holberton.h"
/**
*_strlen_recursion - function that returns the length of a string.
*@s: string
*Return: count
*/
int _strlen_recursion(char *s)
{
	int i = 0, count = 0;

	if (s[i])
	{
		i++;
		return ((count + 1)  + _strlen_recursion((s + i)));
	}
	return (count);
}

