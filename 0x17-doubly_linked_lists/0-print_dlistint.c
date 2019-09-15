#include "lists.h"

/**
 * print_dlistint - print the elements of the lists.
 * @h: pointer to struct.
 * Return: count the elements.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
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
