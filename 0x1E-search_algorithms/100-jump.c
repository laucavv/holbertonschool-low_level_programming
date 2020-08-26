#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in an
 * array of integers using the jump search algorithm
 * @array:  is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: function must return the index where value is located
 */


int jump_search(int *array, size_t size, int value)
{
	int m = 0, jump = 0, i;


	if (array)
	{
		while (array[m] < value && m < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", m, array[m]);
			jump = m;
			m += sqrt(size);
			if (m > (int)(size - 1))
			{
				break;
			}
		}
		printf("Value found between indexes [%d] and [%d]\n", jump, m);
		for (i = jump; i < (int)size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}


	}
	return (-1);
}
