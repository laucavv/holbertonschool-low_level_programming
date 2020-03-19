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
 *add_node_end - adds a new node at the beginning of a list_t list.
 *@head:first node in the list
 *@str:string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lis_end;
	list_t *tmp;

	lis_end = malloc(sizeof(list_t));

	if (lis_end == NULL)
	{
		return (NULL);
	}
	lis_end->str = strdup(str);
	lis_end->len = _strlen(str);
	lis_end->next = NULL;
	if (*head == NULL)
	{
		*head = lis_end;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = lis_end;

	}

	return (lis_end);

}
