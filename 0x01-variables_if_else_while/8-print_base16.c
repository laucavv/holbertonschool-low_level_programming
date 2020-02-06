#include <stdio.h>
/**
* main -  program that prints the alphabet in lowercase.
* Return:0
*/
int main(void)
{
	int ch, hc;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
	}
	for (hc = 97 ; hc <= 102 ; hc++)
	{
		putchar(hc);
	}
	putchar('\n');
	return (0);
}
