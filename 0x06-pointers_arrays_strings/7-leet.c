#include "holberton.h"
/**
 *leet - unction that encodes a string into 1337.
 *@c: string
 * Return: c
 */

char *leet(char *c)
{
	int i, j;
	char minus[] = "aeotl", mayus[] = "AEOTL", num[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
		for (j = 0; minus[j] != '\0' && mayus[j] != '\0'; j++)
		{
			if (c[i] == minus[j] || c[i] == mayus[j])
			{
				c[i] = num[j];
			}
		}
	return (c);
}

