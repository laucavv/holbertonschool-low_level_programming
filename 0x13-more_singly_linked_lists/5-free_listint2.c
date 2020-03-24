#include "lists.h"
/**
 * free_listint2 - function that frees a list.
 * @head: first item in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *auxn;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		auxn = (*head)->next;
		free(*head);
		*head = auxn;
	}
}
