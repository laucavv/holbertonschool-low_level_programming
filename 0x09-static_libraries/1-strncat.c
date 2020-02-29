#include "holberton.h"
/**
 *_strncat -  function that concatenates two strings.
*@dest: char
*@src: char
*@n: value
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0;  j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}

