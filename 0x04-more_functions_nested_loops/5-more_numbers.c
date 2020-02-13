#include "holberton.h"

/**
 *more_numbers -  function that prints the number
 *
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j < 50; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (j == 49)
					_putchar(j);
				_putchar(k);
				if (j == 49 && k == 52)
					k = 10000;
			}
		}
		_putchar('\n');
	}
}
