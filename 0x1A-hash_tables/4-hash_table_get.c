#include "hash_tables.h"

/**
 * hash_table_get - get a value associated with the key.
 * @ht: hash_table.
 * @key: key that search
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	new = ht->array[index];

	while (new)
	{
		if (strcmp(new->key, key) == 0)
		{
			return (new->value);
		}
		new = new->next;
	}
	return (0);
}
