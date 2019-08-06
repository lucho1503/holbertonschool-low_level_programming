#include "lists.h"

/**
 * free_listint - entry point.
 * @head: pointer to struct type listint.
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *liberar;

	while (head)
	{
		liberar = head;
		head = liberar->next;
		free(liberar);
	}
}
