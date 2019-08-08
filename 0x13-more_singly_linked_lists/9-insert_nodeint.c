#include "lists.h"

/**
 * insert_nodeint_at_index - entry point.
 * @head: double pointer to struct type listint_t.
 * @idx: position where hay tha insret.
 * @n: data in the struct.
 * Return: address to new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *ptr;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
		ptr = *head;
		while (ptr->next && i < (idx - 1))
		{
			ptr = ptr->next;
			i++;
		}
		if (i == (idx - 1))
		{
			node->next = ptr->next;
			ptr->next = node;
		}
		else
		{
			return (NULL);
		}
		return (node);
}
