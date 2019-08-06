#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new = NULL;
	
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
		free (node);
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
	node = NULL;
	return (*head);
}
