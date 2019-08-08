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
	if (*head == NULL && idx != 0)
	{
		*head = node;
		node->n = n;
	}
	else
	{
		ptr = *head;
		while (ptr->next && i < (idx - 1))
		{
			if (ptr->next == NULL && i != (idx - 1))
			{
				return (NULL);
			}
			ptr = ptr->next;
			i++;
		}
		node->next = ptr->next;
		ptr->next = node;
	}
	node->n = n;
	return (node);
}
