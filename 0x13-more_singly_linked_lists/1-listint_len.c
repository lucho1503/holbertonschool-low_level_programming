#include "lists.h"

/**
 * listint_len - entry point.
 * @h: pointer to struct.
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
