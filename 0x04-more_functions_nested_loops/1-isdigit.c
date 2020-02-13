#include "holberton.h"

/**
 *_isdigit - function that checks for uppercase character.
 *@c: caracter in ASCII
 * Return: respuesta
 */
int _isdigit(int c)
{
	int respuesta;

	if (c >= 48 && c <= 57)
	{
		respuesta = 1;
	}
	else
	{
		respuesta = 0;
	}
	return (respuesta);
}
