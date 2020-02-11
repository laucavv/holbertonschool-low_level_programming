#include "holberton.h"

/**
 *print_last_digit- computes the absolute value of an integer.
 *@c: value
 * Return: num
 */
int print_last_digit(int c)
{
	int num;

	num = c % 10;


	if (c < 0)
		num  = num  * -1;

	_putchar(num + '0');
	return (num);


}
