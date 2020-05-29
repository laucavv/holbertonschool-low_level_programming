#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value if it succeeded, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		if (key && strlen(key) > 0)
			index = key_index((unsigned char *)key, ht->size);
		else
			return (NULL);

		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				return (tmp->value);
			}
			tmp = tmp->next;
		}
	}
	return (NULL);

}
