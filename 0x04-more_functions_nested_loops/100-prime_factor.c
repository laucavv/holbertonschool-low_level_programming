#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: Always 0.
 */

int main(void)
{
	long  n, m;

	n = 1231952;

	for (m = 2; m < n; m++)
	{
		if (n % m == 0)
		{
			n /= m;
		}
	}
	printf("%ld\n", n);
	return (0);
}
