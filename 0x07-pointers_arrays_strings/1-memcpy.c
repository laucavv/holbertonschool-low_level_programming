#include "holberton.h"
/**
 *_memcpy - function that fills memory with a constant byte.
 *@dest: buffer
 *@src: buffer
 *@n: size
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
