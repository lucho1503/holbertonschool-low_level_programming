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
	remove = malloc(sizeof(listint_t));
	if (remove == NULL)
	{
		free(remove);
		return (0);
	}
	remove = *head;
	aux = (*head)->n;
	if (head != NULL)
	{
		*head = (*head)->next;
		free(remove);
	}
	return (aux);
}
