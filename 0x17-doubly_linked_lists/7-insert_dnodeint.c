#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 * @h:list
 * @idx:index
 * @n:value
 * Return: Always 0.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node = NULL, *tmp = NULL, *aux = NULL;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	tmp = *h;
	if (idx == 0)
	{
		if (tmp == NULL)
			node->next = NULL;
		else
		{
			node->next = tmp;
			tmp->prev = node;
		}
		node->prev = NULL;
		*h = node;
		return (node);
	}
	while (tmp)
	{
		if (i == (idx - 1))
		{
			aux = tmp->next;
			node->next = aux;
			node->prev = tmp;
			tmp->next = node;
			aux->prev = node;
			return (node);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);


}
