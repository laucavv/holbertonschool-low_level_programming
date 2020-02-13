#include "holberton.h"
/**
 *print_triangle - function that draws a diagonal line on the terminal.
 *@size: value
 */
void print_triangle(int size)
{
	int i, j, k, l;

	l = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < (l - 1) ; k++)
			{
				_putchar(' ');

			}

			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			l--;
			_putchar('\n');
		}
	}
}
