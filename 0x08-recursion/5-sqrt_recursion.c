#include "holberton.h"
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

/**
*increase - search the square.
*@n: num
*@x: incremento
*Return: value
*/
int increase(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) < n)
	{
		increase(n, (x + 1));
	}
	else
	{
		return (-1);
	}
}
