#include "holberton.h"
/**
*_strchr -  function that locates a character in a string.
* @s: string
* @c: value
*Return: s
*/
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	s = 0;
		return  (s);

}

