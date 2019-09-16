#include "lists.h"

/**
 * sum_dlistint - sum all the lists.
 * @head: pointer to first element
 * Return: sum the alls lists.
 */

int sum_dlistint(dlistint_t *head)
{
	int suma;

	suma = head->n;
	while (head->next)
	{
		if (head != NULL)
		{
			head = head->next;
			suma += head->n;
		}
		else
			return (0);
	}
	return (suma);
}
