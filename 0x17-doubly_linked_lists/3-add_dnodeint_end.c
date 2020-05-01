#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head:first node in the list
 * @n:number
 * Return:the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_dint = NULL, *tmp = NULL;

	end_dint = malloc(sizeof(dlistint_t));

	if (end_dint == NULL)
	{
		return (NULL);
	}
	end_dint->n = n;
	end_dint->next = NULL;
	if (*head == NULL)
	{
		end_dint->prev = NULL;
		*head = end_dint;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		end_dint->prev = tmp;
		tmp->next = end_dint;
	}
	return (end_dint);
}
