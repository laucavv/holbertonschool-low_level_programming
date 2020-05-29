#include "hash_tables.h"
/**
 * hash_table_print -  function that prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int index;
	int flag = 0;

	if (ht)
	{
		putchar('{');

		for (index = 0; index < ht->size; index++)
		{
			tmp = ht->array[index];
			while (tmp)
			{
				if (flag == 1)
				{
					printf(", ");
				}

				flag = 1;

				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}


		printf("}\n");
	}
}
