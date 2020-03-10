#include "dog.h"
#include <stdlib.h>

/**
 * _strlen -  returns the length of a string.
 *@s: char
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - unction that copies the string pointed to by src
 *@dest: char
 *@src:_ char
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

/**
 *new_dog - define a new type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdo;
	int len1 = 0, len2 = 0;
	char *newname, *newowner;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	newname = malloc(len1 + 1);
	if (!newname)
	{
		return (NULL);
	}
	newowner = malloc(len2 + 1);
	if (!newowner)
	{
		free(newname);
		return (NULL);
	}
	newdo = malloc(sizeof(dog_t));

	if (!newdo)
	{
		free(newname);
		free(newowner);
		return (NULL);
	}
	_strcpy(newname, name);
	_strcpy(newowner, owner);
	newdo->name = newname;
	newdo->age = age;
	newdo->owner = newowner;
	return (newdo);
}
