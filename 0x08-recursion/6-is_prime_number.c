#include "holberton.h"

/**
 * prime_num - prime number
 * @n:number
 * @i:value
 * Return: 1 if is prime 0 if it is not.
 */

int prime_num(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime_num(n, i + 1));
}

/**
 * is_prime_number - integer is a prime number
 * @n: number
 * Return: 1 if it is prime or 0 if it is not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, 2));
}
