#include "holberton.h"
/**
 *jack_bauer - t prints every minute of the day of Jack Baue
 *
 * void
 */

void jack_bauer(void)
{
	int ch, hc, n, l, c, v;

	for (n = 0; n < 24; n++)
	{
		ch = n % 10;
		hc = n / 10;

		for (l = 0; l < 60; l++)
		{
			c = l % 10;
			v = l / 10;
			_putchar(hc + '0');
			_putchar(ch + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(v + '0');
			_putchar ('\n');
		}
	}
}

