#include "lists.h"

/**
 * sum_dlistint - sum all the lists.
 * @head: pointer to first element
 * Return: sum the alls lists.
 */

int sum_dlistint(dlistint_t *head)
{
	int suma;

	if (head == NULL)
	{
		return (0);
	}
	suma = head->n;
	while (head->next)
	{
		if (head != NULL)
		{
			head = head->next;
			suma = head->n + suma;
		}
		else
			return (0);
	}
	return (suma);
}
