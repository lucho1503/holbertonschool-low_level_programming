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
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		ptr = *head;
		while (i < (idx - 1)  && ptr->next)
		{
			ptr = ptr->next;
			i++;
		}
		node->next = ptr->next;
		ptr->next = node;
	}
	node->n = n;
	return (*head);
}
