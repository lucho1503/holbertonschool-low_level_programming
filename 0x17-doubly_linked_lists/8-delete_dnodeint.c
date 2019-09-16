#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a index.
 * @head: pointer to first element of th elist.
 * @index: index to delete the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *p, *p2;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else if (index < i)
	{
		i = 0;
		while (i < (index - 1))
		{
			ptr = ptr->next;
			i++;
		}
		p2 = ptr->next;
		p = ptr->next->next;
		ptr->next = p;
		if (p)
			p->prev = ptr;
		free(p2);
	}
	else
		return (-1);
	return (1);
}
