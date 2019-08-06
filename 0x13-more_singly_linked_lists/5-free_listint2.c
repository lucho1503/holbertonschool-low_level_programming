#include "lists.h"

/**
 * free_listint2 - entry point.
 * @head: double pointer to struct type listint.
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *f;

	while (*head)
	{
		f = *head;
		*head = f->next;
		free(f);
	}
	head = NULL;
}
