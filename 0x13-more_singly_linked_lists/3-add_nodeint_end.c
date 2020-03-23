#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head:first node in the list
 * @n:number
 * Return:the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_int = NULL, *tmp;

	end_int = malloc(sizeof(listint_t));

	if (end_int == NULL)
	{
		return (NULL);
	}
	end_int->n = n;
	end_int->next = NULL;
	if (*head == NULL)
	{
		*head = end_int;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = end_int;
	}
	return (end_int);
}
