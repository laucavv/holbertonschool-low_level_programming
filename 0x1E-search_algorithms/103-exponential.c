#include "search_algos.h"
/**
 * binary_search_e - function that searches for a value in an
 * array of integers using the binary search algorithm
 * @array:  is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * @low : d
 * Return: function must return the index where value is located
 */


int binary_search_e(int *array, size_t low, size_t size, int value)
{
	size_t i, mid = 0;

	while (array && low <= size)
	{

		printf("Searching in array: ");
		for (i = low ; i <= size; i++)
		{

			if (i == size)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}

		mid = ((low + size) / 2);
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			size = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);

}

/**
 * exponential_search - function that searches for a value in an
 * array of integers using the exponential search algorithm
 * @array:  is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: function must return the index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low = 1, high = size - 1;

	if (array)
	{
		while (low < high && array[low] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			low = low * 2;
		}
		if (low < size)
		{
			high = low;
		}

		low = low / 2;
		printf("Value found between indexes [%lu] and [%lu]\n", low, high);
		return (binary_search_e(array, low, high, value));
	}
	return (-1);
}
