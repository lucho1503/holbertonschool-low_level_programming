#include "hash_tables.h"

/**
 * hash_table_set - add a element to hash table.
 * @ht: hash_table element
 * @key: key of element.
 * @value: value of the key.
 * Return: 1 if is succesful or 0 if not.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;
	hash_node_t *arr = NULL;

	if (!ht || !key || !value || !ht->array)
		return (0);
	if (!strcmp(key, ""))
	{
		return (0);
	}
	index = key_index((const unsigned char *) key, ht->size);
	arr = ht->array[index];
	while (arr)
	{
		if (!strcmp(arr->key, key))
		{
			free(arr->value);
			arr->value = strdup(value);
			return (1);
		}
		arr = arr->next;
	}
	node = calloc(1, sizeof(hash_node_t *));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[index])
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;
	return (1);
}
