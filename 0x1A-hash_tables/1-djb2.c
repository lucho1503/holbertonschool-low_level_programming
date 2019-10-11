#include "hash_tables.h"

/**
 * hash_djb2 - implemented has function.
 * @str: string to convert in ascii numbers
 * Return: hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5831;
	while ((c = *str++))
	{
		hash = hash * 33 + c;
	}
	return (hash);
}
