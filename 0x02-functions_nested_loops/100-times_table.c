#include "holberton.h"
/**
 *print_times_table - prints the 9 times table.
 *Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, mul, u, d, c, k;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			k = (j + 1) * i;
			if (mul >= 10 && mul < 100)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else if (mul >= 100)
			{
				_putchar(((i * j) / 100) + '0');
				_putchar((((i * j) / 10) % 10) + '0');
				_putchar(((i * j) / 10) + '0');
			}
			else
				_putchar(mul + '0');
			if ((k < 10) && (j < n) && (mul < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((j < n) && (k < 100) && (mul < 100))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((j < n) && (k >= 100))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
