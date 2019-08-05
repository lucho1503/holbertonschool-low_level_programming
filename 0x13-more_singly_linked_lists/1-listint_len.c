#include "lists.h"

/**
 * listint_len - entry point.
 * @h: pointer to struct.
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
