#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list.
 * @h:list
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
