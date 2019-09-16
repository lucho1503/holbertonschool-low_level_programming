#include "lists.h"

/**
 * free_dlistint - free lists.
 * @head: pointer the first element.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *lib;

	if (head == NULL)
	{
		return;
	}
	lib = head;
	while (lib)
	{
		lib = lib->next;
		free(head);
	head = lib;
	}
	free(head);
}
