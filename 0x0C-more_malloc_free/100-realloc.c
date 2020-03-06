#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_realloc - function that reallocates a memory block
 *@ptr: pointer
 *@old_size: size
 *@new_size: size
 *Return: pptr;
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp = NULL, *pptr = ptr;
	unsigned int i;

	if (old_size == new_size)
	{
		return (pptr);
	}
	if (pptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(pptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (!newp)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		newp[i] = pptr[i];
	}
	free(pptr);
	return (newp);
}
