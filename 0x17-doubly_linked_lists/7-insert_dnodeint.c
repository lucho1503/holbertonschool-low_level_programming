#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a index given.
 * @h: double pointer type struct.
 * @idx: index given to insert node.
 * @n: data of the lists.
 * Return: address of memory of new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *ptr;
	unsigned int i = 0;

	node = malloc(sizeof(node));
	if (node == NULL)
		return (NULL);
	node->n = n;	
	if (!*h && idx != 0)
	{
		return (NULL);
	}
	else
	{
		if (idx == 0)
		{	
			node->next = *h;
			*h = node;
		}
		else
		{
			ptr = *h;
			while (i < (idx - 1) && ptr->next)
			{
				ptr = ptr->next;
				i++;
			}
			if (i == (idx - 1))
			{
				node->next = ptr->next;
				node->prev = ptr;
				ptr->next = node;
			}
			else
				return (NULL);
		} return (node);
	} return (NULL);
}
