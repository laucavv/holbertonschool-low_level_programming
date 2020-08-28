#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in an
 * array of integers using the linear_skip algorithm
 * @list: is a pointer to the head of the list to search
 * @value: is the value to search
 * Return: function must return the index where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head = list,  *tmp = NULL;

	if (list)
	{
		while (head->n < value && head->express)
		{	
			/*if (head->express)
			{
				tmp = head->express;
				if (head->n >= value)
				{
					break;
				}*/
				tmp = head;
				head = head->express;
				printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
			/*}
			else
			{
				head = head->next;
			}*/	
		}
		if (head->n >= value)
			printf("Value found between indexes [%lu] and [%lu]\n", tmp->index, head->index);

		/*while (head)
		{
			printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
			if (head->n == value)
			{
				return (head);
			}
			head = head->next;
		}*/


	}
	return (NULL);
}
