#include "holberton.h"
/**
 *_strcat -  function that concatenates two strings.
*@dest: char
*@src: char
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0;  src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}

