#include "holberton.h"
/**
 *_strcmp -  function that compares two strings.
 *@s1: string
 *@s2: string
 * Return: diferencia
 */
int _strcmp(char *s1, char *s2)
{
	int i, diferencia;

	i = 0;
	diferencia = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && diferencia == 0)
	{
		if (s1[i] != s2[i])
		{
			diferencia = s1[i] - s2[i];
		}
		i++;

	}
	return (diferencia);
}
