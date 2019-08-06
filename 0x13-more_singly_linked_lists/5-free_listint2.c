#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *f;
	
	while (*head)
	{
		f = *head;
		*head = f->next;
		free (f);
	}
	f = NULL;
	head = NULL;
}
