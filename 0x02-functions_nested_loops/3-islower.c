#include "holberton.h"

/**
 * _islower - function that checks for lowercase character.
 *@c: caracter in ASCII
 * Return: respuesta
 */
int _islower(int c)
{
	int respuesta;

	if (c >= 97  && c <= 122)
	{
		respuesta = 1;
	}
	else
	{
		respuesta = 0;
	}
	return (respuesta);
}
