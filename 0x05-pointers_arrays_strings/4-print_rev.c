#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Array to print.
 */

void print_rev(char *s)
{
	int cont;
	int rev;

	cont = 0;
	rev = 0;
	while (*s != '\0')
	{
		s++;
		cont++;
	}
	rev = cont;
	while (rev >= 0)
	{
		_putchar(*s);
		s--;
		rev--;
	}
	_putchar('\n');
}