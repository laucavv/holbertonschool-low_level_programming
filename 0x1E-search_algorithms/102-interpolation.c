#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in an
 * array of integers using the interpolation search algorithm
 * @array:  is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: function must return the index where value is located
 */


int interpolation_search(int *array, size_t size, int value)
{
	size_t  high = size - 1, low = 0;
	int pos = 0, size_o = size;

	if (array)
	{
		while (low <= high)
		{
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));



			if (pos >= size_o || pos < 0)
			{
				printf("Value checked array[%d] is out of range\n", pos);
				return (-1);
			}

			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
			{
				return (pos);
			}
			if (array[pos] < value)
			{
				low = pos + 1;
			}
			else
			{
				high = pos - 1;
			}

		}
	}
	return (-1);
}
