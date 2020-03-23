#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * @h:list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
