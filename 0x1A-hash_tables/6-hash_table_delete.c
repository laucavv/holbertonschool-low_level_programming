#include "hash_tables.h"
/**
 * hash_table_delete -  function that prints a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *aux = NULL;
	unsigned long int index = 0;

	if (ht && ht->array)
	{

		for (index = 0; index < ht->size; index++)
		{
			tmp = ht->array[index];
			while (tmp)
			{
				aux = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = aux;
			}
		}
		free(ht->array);
		free(ht);
	}

}
