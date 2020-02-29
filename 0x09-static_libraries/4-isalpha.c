#include "holberton.h"

/**
 * _isalpha - function that checks for lowercase character.
 *@c: caracter in ASCII
 * Return: respuesta
 */
int _isalpha(int c)
{
	int respuesta;

	if ((c >= 97  && c <= 122) || (c >= 65  && c <= 90))
	{
		respuesta = 1;
	}
	else
	{
		respuesta = 0;
	}
	return (respuesta);
}
