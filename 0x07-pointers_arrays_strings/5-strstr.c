#include "holberton.h"
/**
*_strstr - function that searches a string for any of a set of bytes.
* @hays: string
* @a: value
*Return:haystack
*/
char *_strstr(char *hays, char *a)
{
	int i, j, c = 0;

	for (i = 0; hays[i] != '\0'; i++)
	{
		c = i;
		for (j = 0; hays[i] == a[j] && hays[i] != '\0' && a[j] != '\0'; j++, i++)
		{
			continue;
		}
		if (a[j] == '\0')
		{
			return (hays += c);
		}
	}
	return (0);
}

