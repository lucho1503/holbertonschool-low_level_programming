#include "hash_tables.h"

/**
 * key_index - given an index of a key.
 * @key: where it the key.
 * @size: size of the matrix of the table hash.
 * Return: index of key.
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int i;

	hash = 0;
	i = 0;
	while (key && key[i])
	{
		hash = (hash + key[i]) % size;
		i++;
	}
	return (hash);
}
