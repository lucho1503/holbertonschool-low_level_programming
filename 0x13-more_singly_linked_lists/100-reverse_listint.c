#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 * @head: first linked list
 * Return: pointer to first element.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = new;
	}
	*head = node;
	return (*head);
}
