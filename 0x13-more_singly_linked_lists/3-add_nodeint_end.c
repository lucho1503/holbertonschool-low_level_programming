#include "lists.h"

/**
 * add_nodeint_end - entry point.
 * @head: double pointer to struct.
 * @n: contains the numbers to list.
 * Return: address of memory of new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
		free(node);
	}
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		new = *head;
		while (new->next)
		{
			new = new->next;
		}
		new->next = node;
		node->n = n;
	}
	return (*head);
}
