#include "hash_tables.h"

/**
 * hash_table_print - print the hash table.
 * @ht: is where it's hash table
 * Return: nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new = NULL;
	unsigned long int i = 0;
	char *sep = "";

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			new = ht->array[i];
			while (new)
			{
				printf("%s", sep);
				printf("'%s': '%s'", new->key, new->value);
				new = new->next;
				sep = ", ";
			}
		}
	}
	printf("}\n");
}

