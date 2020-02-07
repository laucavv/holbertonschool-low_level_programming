#include <stdio.h>
/**
* main -  program that prints the alphabet in lowercase.
* Return:0
*/
int main(void)
{
	int ch, hc;

	for (ch = 48; ch <= 57; ch++)
	{
		for (hc = 48; hc <= 57; hc++)
		{
			putchar(ch);
			putchar(hc);
			if ((ch < 57) || (hc < 57))
			{
				putchar(',')
				putchar(' ');
			}
		}
		hc = 48;
	}

	putchar('\n');
	return (0);
}
