#include "lists.h"

/**
 * len - returns the number of elements in a linked dlistint_t list.
 * @h:list
 * Return: the number of nodes
 */
size_t len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h:list
 * @idx:index
 * @n:value
 * Return: Always 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node = NULL, *tmp = *h, *aux = NULL;

	if (h == NULL || (tmp == NULL && idx > 0))
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		if (tmp == NULL)
			node->next = NULL;
		else
			node->next = tmp, tmp->prev = node;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	while (tmp && idx <= len(tmp))
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
	free(node);
	return (NULL);
}
