#include "lists.h"

/**
 * add_dnodeint - add node beginind.
 * @head: double pointer to head list.
 * @n: integer data of the lists.
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(node));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head)
	{
		node->next = *head;
		(*head)->prev = node;
	}
	*head = node;
	return (*head);
}
