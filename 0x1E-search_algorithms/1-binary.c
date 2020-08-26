#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an
 * array of integers using the binary search algorithm
 * @array:  is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: function must return the index where value is located
 */


int binary_search(int *array, size_t size, int value)
{
	int first = 0, mid = 0, size_o = size - 1, i;


	if (array)
	{

		while (first <= size_o)
		{

			printf("Searching in array: ");
			for (i = first ; i <= size_o; i++)
			{

				if (i == size_o)
				{
					printf("%d\n", array[i]);
				}
				else
				{
					printf("%d, ", array[i]);
				}
			}

			mid = ((first + size_o) / 2);
			if (array[mid] < value)
			{
				first = mid + 1;
			}
			else if (array[mid] > value)
			{
				size_o = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
