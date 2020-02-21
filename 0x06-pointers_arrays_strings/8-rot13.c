#include "holberton.h"

/**
 *rot13 - function that encodes a string using rot13.
 *@c: pointer that bring a string.
 *Return: c
 */

char *rot13(char *c)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = alpha13[j];
				break;
			}
		}
	}
	return (c);
}
