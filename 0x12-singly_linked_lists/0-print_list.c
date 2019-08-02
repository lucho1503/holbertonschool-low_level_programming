#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - entry point.
 * @h: pointre to struct.
 * Return: Always elements.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != '\0')
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] %p\n", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
