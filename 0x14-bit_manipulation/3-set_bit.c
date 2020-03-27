#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: position
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*unsigned long int change;*/

	if (index > 63)
	{
		return (-1);
	}

	*n = *n | (1 << index);
	return (1);


}
