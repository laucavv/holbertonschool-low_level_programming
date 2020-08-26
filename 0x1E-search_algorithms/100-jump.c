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
	int m = sqrt(size), jump = 0, i, sum = 0;


	if (array)
	{
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		while (array[m] < value && jump < (int)size)
		{

			jump = m;
			printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
			m += sqrt(size);
			if (jump + 1 >= (int)size)
			{
				break;
			}

		}
		sum = (int)(jump + sqrt(size));
		printf("Value found between indexes [%d] and [%d]\n", jump, sum);

		for (i = jump; i <= m && i < (int)size ; i++)
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
