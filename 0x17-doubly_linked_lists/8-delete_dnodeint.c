#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head:list
 * @index:index
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL, *aux = NULL;

	tmp = *head;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head  = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == (index - 1))
		{
			aux = tmp->next;
			tmp->next = aux->next;
			aux->next->prev = tmp;
			free(aux);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);

}
