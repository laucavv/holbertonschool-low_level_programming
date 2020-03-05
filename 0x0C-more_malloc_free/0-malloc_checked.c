#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked -  function that allocates memory using malloc.
 *@b: size
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);

}
