#include "sort.h"

void sorted_list(listint_t **list, listint_t *left, listint_t *der);

/**
 * insertion_sort_list - sort list wtih insertion.
 * @list: list for sotr.
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t **sorted;
	listint_t *current = NULL;
	listint_t *der;

	sorted = list;
	if (!*list || !list || !(*list)->next)
		return;

	current = *list;
	while (current->next != NULL)
	{
		if (current->next->n < current->n)
		{
			der = current->next;
			while (der->n < der->prev->n)
			{
				sorted_list(sorted, der->prev, der);
				print_list(*sorted);
				if (der->prev == NULL)
					break;
			}
			current = der;
		}
		current = current->next;
	}
}

/**
 * sorted_list - swap nodes.
 * @left: pointer to left list.
 * @der: pointer to right of yhe list.
 * @list: double linked list.
 * Return: nothing
 */

void sorted_list(listint_t **list, listint_t *left, listint_t *der)
{
	if (left->prev)
	{
		left->prev->next = der;
	}
	else
	{
		*list = der;
	}
	if (der->next)
	{
		der->next->prev = left;
	}
	left->next = der->next;
	der->prev = left->prev;
	der->next = left;
	left->prev = der;
}
