#include "holberton.h"
/**
 *increase - search the square.
 *@n: num
 *@x: incremento
 *Return: value
 */
int increase(int n, int x)
{
	int value = 0;

	if ((x * x) == n)
	{
		value = x;
	}
	else if ((x * x) < n)
	{
		return (increase(n, (x + 1)));
	}
	else if ((x * x) > n)
	{
		return (-1);
	}
	return (value);
}
/**
 *_sqrt_recursion - square root of a number
 *@n: num
 *Return: square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (increase(n, 0));
}
