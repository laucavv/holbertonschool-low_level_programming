#include "holberton.h"

/**
 * print_sign -  function that prints the sign of a number.
 *@n: caracter in ASCII
 * Return: respuesta
 */
int print_sign(int n)
{
	int respuesta;

	if (n > 0)
	{
		_putchar('+');
		respuesta = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		respuesta = -1;
	}

	else
	{
		_putchar('0');
		respuesta = 0;
	}
	return (respuesta);
}
