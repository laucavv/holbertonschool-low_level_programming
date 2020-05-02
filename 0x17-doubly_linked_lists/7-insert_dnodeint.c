#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list
 * @idx: index
 * @n: value
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node, *tmp = *h;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (tmp == NULL && idx > 0)
	{	free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		if (tmp == NULL)
			node->next = NULL;
		else
		{	node->next = tmp;
			tmp->prev = node;
		}
		node->prev = NULL;
		*h = node;
		return (node);
	}
	for (; i < idx - 1; i++)
	{
		if (tmp == NULL)
		{	free(node);
			return (NULL);
		}
		tmp = tmp->next;
	}

	node->next = tmp->next;
	node->prev = tmp;
	if (tmp->next)
		tmp->next->prev = node;
	tmp->next = node;
	return (node);
}
