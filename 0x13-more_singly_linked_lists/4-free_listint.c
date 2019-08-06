#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *liberar;
	
	while(head)
	{
		liberar = head;
		head = liberar->next;
		free (liberar);
		
	}	
	head = NULL; 
		
	
}
