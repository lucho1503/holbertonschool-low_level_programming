#include "lists.h"

/**
 * dlistint_len - count the elements of the lists.
 * @h: pointer to struct
 * Return: count the elements of the lists.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
