#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at a posotion.
 * @head: pointer to head lists.
 * @index: index the get node.
 * Return: node get.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	node = head;
	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	if (i != index)
	{
		return (NULL);
	}
	else
		return (node);
}
