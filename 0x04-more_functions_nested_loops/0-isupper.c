#include "holberton.h"

/**
 *_isupper - function that checks for uppercase character.
 *@c: caracter in ASCII
 * Return: respuesta
 */
int _isupper(int c)
{
	int respuesta;

	if (c >= 65 && c <= 90)
	{
		respuesta = 1;
	}
	else
	{
		respuesta = 0;
	}
	return (respuesta);
}
