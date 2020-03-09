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
 *_strdup - function that returns a pointer
 *@str: char
 * Return: s
 */

char *_strdup(char *str)
{
	int j, l;
	char *s;

	if (!str)
	{
		return (NULL);
	}

	l = _strlen(str) + 1;

	s = malloc(l * sizeof(char));
	if (!s)
	{
		return (NULL);
	}

	for (j = 0; j < l; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
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
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (!new_dog)
	{
		return (NULL);
	}
	if (!name)
	{
		free(new_dog);
	}
	else
	{
		new_dog->name = _strdup(name);
		if (!(new_dog->name))
		{
			free(new_dog);
			return (NULL);
		}

	}
	if (!owner)
	{
		free(new_dog);
		return (NULL);
	}
	else
	{
		new_dog->owner = _strdup(owner);
		if (!new_dog->owner)
		{
			free(new_dog->owner);
			free(new_dog);
			return (NULL);
		}
	}
	new_dog->age = age;
	return (new_dog);
}
