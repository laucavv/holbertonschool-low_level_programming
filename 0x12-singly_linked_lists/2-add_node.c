#include "lists.h"
#include <string.h>
/**
 * _strlen -  returns the length of a string.
 *@s: char
 * Return: i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head:first node in the list
 *@str:string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lis_new;

	lis_new = malloc(sizeof(list_t));

	if (lis_new == NULL)
	{
		return (NULL);
	}
	lis_new->str = strdup(str);
	lis_new->len = _strlen(str);
	lis_new->next = *head;
	*head = lis_new;

	return (lis_new);

}
