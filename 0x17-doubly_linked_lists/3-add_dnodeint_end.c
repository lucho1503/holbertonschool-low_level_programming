#include "lists.h"

/**
 * add_dnodeint_end - insert node in the end.
 * @head: double pointer at the begining lists.
 * @n: data of the list.
 * Return: address of memory of new eleemnt.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *new;

	node = malloc(sizeof(node));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			new = *head;
			while (new->next != NULL)
			{
				new = new->next;
			}
			node->n = n;
			node->prev = new;
			new->next = node;
		}
	}
	return (*head);
}
