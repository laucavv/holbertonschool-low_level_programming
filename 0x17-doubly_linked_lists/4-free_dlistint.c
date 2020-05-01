#include "lists.h"

/**
 * free_dlistint - function that frees a list.
 * @head: first item in the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *auxn;

	tmp = head;

	while (tmp != NULL)
	{
		auxn = tmp->next;
		free(tmp);
		tmp = auxn;
	}


}
