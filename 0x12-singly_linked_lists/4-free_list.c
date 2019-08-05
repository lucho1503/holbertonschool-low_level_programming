#include "lists.h" 

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *freezer;

	while (head)
	{
	freezer = head;
	free (freezer->str);
	free (freezer);
	head = freezer->next;
	}
}
