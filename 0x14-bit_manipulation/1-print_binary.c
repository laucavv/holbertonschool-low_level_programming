#include "holberton.h"

/**
 * corv_binary - auxiliary function for print number in binary
 * @a: number
 */
void corv_binary(unsigned long int a)
{
	if (a == 0)
	{
		return;
	}
	else
	{
		corv_binary(a >> 1);
	}

	_putchar((a & 1) + 48);

}

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;

	}
	else
	{
		corv_binary(n);
	}
}
