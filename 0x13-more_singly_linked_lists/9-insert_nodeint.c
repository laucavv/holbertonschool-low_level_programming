#include "lists.h"
/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head:list
 * @idx:index
 * @n:value
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node = NULL, *tmp = NULL, *aux = NULL;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	tmp = *head;
	if (idx == 0)
	{
		node->next = tmp;
		*head = node;
		return (node);

	}

	while (tmp)
	{
		if (i == (idx - 1))
		{

			aux = tmp->next;
			node->next = aux;
			tmp->next = node;
			return (node);

		}
		i++;
		tmp = tmp->next;

	}
	return (NULL);

}
