#include "holberton.h"

/**
 *puts2 - function that prints every other character of a string
 *@str: string
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
