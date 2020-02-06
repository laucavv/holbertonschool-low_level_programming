#include <stdio.h>
/**
* main -  program that prints the alphabet in lowercase.
* Return:0
*/
int main(void)
{
	int ch;

	for (ch = 122 ; ch >= 97 ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
