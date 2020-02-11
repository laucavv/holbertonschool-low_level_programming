#include "holberton.h"

/**
 *print_last_digit- computes the absolute value of an integer.
 *@c: value
 * Return: num
 */
int print_last_digit(int c)
{
	int num;

	if (c < 0)
		c = c * -1;
	
	num = c % 10;
	_putchar(num + '0');
	return (num);


}
