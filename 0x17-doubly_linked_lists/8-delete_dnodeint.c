#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a index.
 * @head: pointer to first element of th elist.
 * @index: index to delete the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *p;
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
		}
		else
			return (-1);
		return (1);
	}
	else
		return (-1);
}
