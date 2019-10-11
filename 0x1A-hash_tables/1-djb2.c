#include "hash_tables.h"
#define TABLE 1000000000000

/**
 * hash_djb2 - implemented has function.
 * @str: string to convert in ascii numbers
 * Return: hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
