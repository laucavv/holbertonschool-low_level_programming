#include "holberton.h"

/**
 *puts_half -  prints a string
 *@str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = (i / 2);
	}
	else
	{
		j = ((i - 1) / 2) + 1;
	}
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
