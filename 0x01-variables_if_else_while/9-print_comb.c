#include <stdio.h>
/**
* main -  program that prints the alphabet in lowercase.
* Return:0
*/
int main(void)
{
	int ch;

	ch =  48;
	while (ch <= 57)
	{
		putchar(ch);
		if (ch < 57)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
