#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 *@c: value
 * Return: num
 */
int _abs(int c)
{
	int num;

	if (c < 0)
	{
		num = c * -1;
	}
	else
	{
		num = c;
	}
	return (num);


}
