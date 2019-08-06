#include "lists.h"

/**
 * pop_listint - entry point.
 * @head: double pointer to stuct type listint_t.
 * Return: data of (n) in the node principal.
 */

int pop_listint(listint_t **head)
{
	listint_t *remove;
	int aux;

	if (head == NULL)
	{
		return (0);
	}

	if (head)
	{
		aux = (*head)->n;
		remove = *head;
		*head = (*head)->next;
		free(remove);
	}
	return (aux);
}
