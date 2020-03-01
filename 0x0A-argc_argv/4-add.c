#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*_isdigit - program that multiplies two numbers.
*@c: arguments
*Return: 0 or 1;
*/
int _isdigit(char *c)
{
	int i, res;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (isdigit(c[i]) == 0)
		{
			res = 0;
		}
	}
	return (1);
}
/**
*main - program that adds positive numbers.
*@argc: arguments
*@argv: pointer
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
