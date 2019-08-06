#include "lists.h"

/**
 * print_listint - entry point.
 * @h: pointer to struct type listint_t.
 * Return: numbers of lists.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		i++;
	}
	return (i);
}
