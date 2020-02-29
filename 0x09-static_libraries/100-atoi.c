#include "holberton.h"
/**
*_atoi - busca numero en una cadena
*@s: string
*Return: i;
  */

int _atoi(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
