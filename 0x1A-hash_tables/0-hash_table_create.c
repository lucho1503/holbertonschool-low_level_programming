#include "hash_tables.h"

/**
 * *hash_table_create - create new table hash.
 * @size: size of array.
 * Return: new table hash.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size < 1)
	{
		return (NULL);
	}
	new_table = malloc(sizeof(new_table));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	if (new_table->array == NULL)
	{
		return (NULL);
	}
	memset(new_table->array, 0, size * sizeof(hash_node_t));
	new_table->size = size;
	return (new_table);
}
