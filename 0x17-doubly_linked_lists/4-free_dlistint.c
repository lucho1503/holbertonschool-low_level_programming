#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
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
