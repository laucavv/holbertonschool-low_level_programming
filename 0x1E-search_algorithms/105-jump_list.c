#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in an
 * array of integers using the jump search algorithm
 * @list: is a pointer to the head of the list to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: function must return the index where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *head = list, *temp = head;
	size_t jump = sqrt(size), low = 0;


	if (list)
	{
		while (head->next && head->n < value)
		{
			while (temp->next && temp->index < jump)
			{
				temp = temp->next;
			}

			printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);

			if (temp == NULL || jump > (size - 1) || temp->n >= value)
			{
				break;
			}
			low = jump;
			jump += sqrt(size);
			head = temp;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", low, temp->index);
		while (head)
		{
			printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
			if (head->n == value)
			{
				return (head);
			}
			head = head->next;
		}


	}
	return (NULL);
}
