#include <stdio.h>
/**
* main -  program that prints the alphabet in lowercase.
* Return:0
*/
int main(void)
{
	char ch, hc;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (hc = 'A' ; hc <= 'Z' ; hc++)
	{
		putchar(hc);
	}
	putchar('\n');
	return (0);
}
