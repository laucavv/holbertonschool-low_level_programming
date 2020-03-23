#include "lists.h"
/**
 * free_listint2 - function that frees a list.
 * @head: first item in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *auxn;

	tmp = *head;

	while (tmp != NULL)
	{
		auxn = tmp->next;
		free(tmp);
		tmp = auxn;
	}
	*head = NULL;
}
