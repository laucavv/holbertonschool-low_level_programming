#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - program that multiplies two numbers.
*@argc: arguments
*@argv: pointer arguments
*Return: 0;
*/
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
