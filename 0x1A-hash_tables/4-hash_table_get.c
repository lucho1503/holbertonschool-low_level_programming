#include "hash_tables.h"

/**
 * hash_table_get - get a value associated with the key.
 * @ht: hash_table.
 * @key: key that search
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *cp_key;
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL)
		return (NULL);
	cp_key = strdup(key);
	index = key_index((const unsigned char *) key, ht->size);
	new = ht->array[index];

	while (new != NULL)
	{
		if (strcmp(new->key, cp_key) == 0)
		{
			return (new->value);
		}
		new = new->next;
	}
	return (NULL);
}
