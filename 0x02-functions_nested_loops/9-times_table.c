#include "holberton.h"
/**
 * times_table - prints the 9 times table.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j, mul, u, d, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			k = (j + 1) * i;

			if (mul >= 10)
			{
				u = mul % 10;
				d = mul / 10;
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				_putchar(mul + '0');
			}
			if ((k < 10) && (j < 9) && (mul < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((j < 9) && (k >= 10))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
