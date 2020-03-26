#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index: position get
 * Return: position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int pos = 0;

	while (i <= index)
	{
		if (i == index)
		{
			pos = (n & 1);
			break;
		}
		n = n >> 1;
		i++;

	}
	return (pos);
}
