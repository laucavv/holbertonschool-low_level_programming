#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - function that creates an array of integers.
 *@min: number min
 *@max: number max
 * Return: arr.
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = ((max - min) + 1);
	arr = malloc(size * sizeof(int));
	if(!arr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);

}
