#include "holberton.h"
/**
 *_strncpy -  function that concatenates two strings.
*@dest: char
*@src: char
*@n: value
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0;  j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
