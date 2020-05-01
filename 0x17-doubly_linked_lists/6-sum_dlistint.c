#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the  list
 * @head: list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	while (head)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
