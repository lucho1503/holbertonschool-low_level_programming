#include "lists.h"

/**
 * get_nodeint_at_index - entry point.
 * @head: pointer tu struct type listint_t.
 * @index: index of the list linked.
 * Return: the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	node = head;
	while (i < index && node != NULL)
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
