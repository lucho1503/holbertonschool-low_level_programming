#include "lists.h"

/**
 * sum_listint - entry point.
 * @head: pointer to head of the list.
 * Return: sum all of the data of the list.
 */

int sum_listint(listint_t *head)
{
	int aux;

	aux = head->n;
	while (head->next)
	{
		if (head != NULL)
		{
			head = head->next;
			aux = head->n + aux;
		}
		else
			return (0);
	}
	return (aux);
}
