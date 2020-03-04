#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: size
 *@height: size
 *Return: arr
 */

int **alloc_grid(int width, int height)
{
	int i, y, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int *));
		if (arr[i] == NULL)
		{
			for (y = 0; y < i; y++)
			{
				free(arr[y]);
			}
			free(arr);
			return (NULL);

		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}

	}
	return (arr);
}
