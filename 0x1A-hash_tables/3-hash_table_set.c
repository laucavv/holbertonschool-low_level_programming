#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: string, data to be enter
 * @value: The value corresponding to a key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *key_n = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		if (key && strlen(key) > 0)
			index = key_index((unsigned char *)key, ht->size);
		else
			return (0);

		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}

		key_n = malloc(sizeof(hash_node_t));
		if (!key_n)
			return (0);
		key_n->key = strdup(key);
		key_n->value = strdup(value);
		key_n->next = ht->array[index];
		ht->array[index] = key_n;

		return (1);
	}
	return (0);

}
