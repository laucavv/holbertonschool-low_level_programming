#include <stdio.h>
/**
* main -  program that prints the alphabet in lowercase.
* Return:0
*/
int main(void)
{
int ch, hc, n;

	for (n = 1; n < 90; n++)
	{
		ch = n % 10;
		hc = n / 10;
		if (hc < ch)
		{
			putchar(hc + '0');
			putchar(ch + '0');
			if ((hc < 8)  || (ch < 9))
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
