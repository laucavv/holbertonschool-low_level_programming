#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list.
 * @h:list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
