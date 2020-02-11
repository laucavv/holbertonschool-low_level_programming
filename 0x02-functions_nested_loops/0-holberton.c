#include "holberton.h"

/**
* main - program that prints Holberton, followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
	char arregloName[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(arregloName[i]);
	}
	_putchar('\n');
	return (0);

}
