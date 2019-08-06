#include "lists.h"

/**
 * pop_listint - entry point.
 * @head: double pointer to stuct type listint_t.
 * Return: data of (n) in the node principal.
 */

int pop_listint(listint_t **head)
{
	listint_t *remove;
	int aux = 0;

	if (head != NULL)
	{
		remove = *head;
		aux = (*head)->n;
		*head = (*head)->next;
		free(remove);
	}
	else
	{
		return (0);
	}
	return (aux);
}
