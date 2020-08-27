#include "search_algos.h"

/**
 * binary - auxilar function.
 * @array: is a pointer to the first element of the array to search
 * @low: pointer of the first element to the subarray
 * @high: pointer of the last element to the subarray
 * @value: is the value to search
 * Return: function must return the index where value is located
 */
int binary(int *array, size_t low, size_t high, int value)
{
	size_t i = 0, mit = 0;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		mit = low + (high - low) / 2;
		if (array[mit] == value && array[mit - 1] != value)
			return (mit);
		if (value <= array[mit])
		{
			return (binary(array, low, mit, value));
		}
		else
		{
			return (binary(array, (mit + 1), high, value));
		}
	}
	return (-1);
}


/**
 * advanced_binary - function that searches for a value in an
 * array of integers using the binary search algorithm
 * @array:  is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: function must return the index where value is located
 */


int advanced_binary(int *array, size_t size, int value)
{

	if (array)
	{

		return (binary(array, 0, size - 1, value));
	}
	return (-1);
}
