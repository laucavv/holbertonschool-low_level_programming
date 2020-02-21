#include "holberton.h"

/**
 *cap_string - function that capitalizes all words of a string
 *@c: string
 * Return: c
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
		if (c[i] >= 97 && c[i] <= 122
				&& (c[i - 1] == 32 || c[i - 1] == ','
					|| c[i - 1] == ';' || c[i - 1] == '.'
					|| c[i - 1] == '!' || c[i - 1] == '?'
					|| c[i - 1] == '"' || c[i - 1] == '('
					|| c[i - 1] == ')' || c[i - 1] == '{'
					|| c[i - 1] == '}' || c[i - 1] == '\n'
					|| c[i - 1] == '\t'))
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
