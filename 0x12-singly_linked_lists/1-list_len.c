#include "lists.h"

/**
 * list_len - entry point.
 * @h: pointer to struct node.
 * Return: elements number.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
