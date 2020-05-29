#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_h = NULL;
	hash_node_t **node_h = NULL;

	table_h = malloc(sizeof(hash_table_t));

	if (table_h == NULL)
	{
		return (NULL);
	}

	node_h = malloc(size * sizeof(hash_node_t *));

	if (node_h == NULL)
	{
		free(table_h);
		return (NULL);
	}
	table_h->array = node_h;
	table_h->size = size;

	return (table_h);

}
