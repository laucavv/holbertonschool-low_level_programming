#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: list
 * Return: size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	int first_back = 0;
	void *locate;

	while (head != NULL)
	{
		first_back = head - head->next;
		locate = (void *)head;
		printf("[%p] %d\n", locate, head->n);
		if (first_back > 0)
		{
			head = head->next;
		}
		else
		{
			locate = head->next;
			printf("-> [%p] %d\n", locate, head->n);
			break;
		}
		length++;
	}
	return (length);
}
