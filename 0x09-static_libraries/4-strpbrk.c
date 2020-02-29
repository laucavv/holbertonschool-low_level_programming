#include "holberton.h"
/**
*_strpbrk - function that searches a string for any of a set of bytes.
* @s: string
* @accept: value
*Return: s
*/
char *_strpbrk(char *s, char *accept)
{
	int j, c = 0;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				c++;
				return (s);
			}
		}
	}
	if (c != 0)
	{
		return (s);
	}
	s = 0;
		return  (s);

}

