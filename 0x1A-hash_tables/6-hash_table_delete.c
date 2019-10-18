#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table and free the memory.
 * @ht: hash table
 * Return: nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *fre;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				fre = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = fre;
			}
		}
	}
	free(ht->array);
	free(ht);
}
