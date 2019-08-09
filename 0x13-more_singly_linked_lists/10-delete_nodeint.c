#include "lists.h"

/**
 * delete_nodeint_at_index - entry point.
 * @head: double pointer to struct.
 * @index: index where be the node at delete.
 * Return: 1 if is succesfull or -1 if not.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *p;
	unsigned int i = 0, j = 0;

	if (*head != NULL)
	{
		ptr = *head;
		while (ptr != NULL)
		{
			ptr = ptr->next;
			i++;
		}
		ptr = *head;
		if (index == 0)
		{
			*head = (*head)->next;
			free(ptr);
		}
		else if (index < i)
		{
			while (j < index - 1)
			{
				ptr = ptr->next;
				j++;
			}
			p = ptr->next;
			ptr->next = p->next;
			free(p);
		}
		else
		{
			return (-1);
		}
		return (1);
	}
	else
		return (-1);
}
