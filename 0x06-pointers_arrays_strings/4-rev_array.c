#include "holberton.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	tmp = 0;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;

	}
}
