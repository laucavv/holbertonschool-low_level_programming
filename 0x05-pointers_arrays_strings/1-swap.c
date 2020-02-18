#include "holberton.h"
/**
 * swap_int - function that swaps the values of two integers.
 *@a: value
 *@b: value
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
