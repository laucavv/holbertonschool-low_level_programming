#include "holberton.h"
#include <stdio.h>
/**
*main -  that prints the number of arguments passed into it.
*@argc: arguments
*@argv: pointer arguments
*Return: 0;
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}
