#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - function that calculates lenght of a string
 * @str: string
 * Return: the size  of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: size of the string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int conts1, lens1, total, lens2, conts2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	if (n >= lens2)
	{
		n = lens2;
	}
	total = lens1 + n;
	concat = malloc(sizeof(char) * (total + 1));
	if (concat == 0)
	{
		return (NULL);
	}
	for (conts1 = 0; conts1 < lens1; conts1++)
	{
		concat[conts1] = s1[conts1];
	}
	for (conts2 = 0; conts2 < n; conts2++)
	{
		concat[conts1 + conts2] = s2[conts2];
	}

	concat[conts1 + conts2] = '\0';
	return (concat);
}
