#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head:first node in the list
 * @n:number
 * Return:the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dint = NULL;

	new_dint = malloc(sizeof(dlistint_t));

	if (new_dint == NULL)
	{
		return (NULL);
	}
	new_dint->n = n;
	new_dint->prev = NULL;

	if (*head == NULL)
	{
		new_dint->next = NULL;
	}
	else
	{
		new_dint->next = *head;
		(*head)->prev = new_dint;
	}
	*head = new_dint;
	return (new_dint);

}
