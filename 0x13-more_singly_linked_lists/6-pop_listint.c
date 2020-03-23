#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a list
 * @head: list
 * Return:  returns the head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (n);
}
