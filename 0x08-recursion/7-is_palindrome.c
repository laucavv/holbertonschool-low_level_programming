#include "holberton.h"

/**
 * strlen -  function that returns the length of a string
 * @s: value
 * Return: size
 */
int strlen_me(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + strlen_me(s + 1));
	}
}

/**
 * palindro - compare two strings.
 * @s: string
 * @l: length of s.
 *
 * Return: return palindrome.
 */

int palindro(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (s[0] == s[l - 1])
	{
		return (palindro(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - determine if a string is palindrome.
 * @s: The string.
 * Return: 1 if it is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int l = strlen_me(s);

	if (l <= 1)
	{
		return (0);
	}
	return (palindro(s, l));
}
