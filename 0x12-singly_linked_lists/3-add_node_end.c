#include "lists.h"

/**
 * *add_node_end - entry point.
 * @str: string of struct nodo.
 * @head: first element of the list.
 * Return: address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *nodo, *ultimo = NULL;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	nodo = malloc(sizeof(list_t));
	if (nodo == NULL)
	{
		return (NULL);
	}
	nodo->len = i;
	nodo->str = strdup(str);
	nodo->next = NULL;
	if (*head == NULL)
	{
		*head = nodo;
	}
	else
	{
		ultimo = *head;
		while (ultimo->next)
		{
			ultimo = ultimo->next;
		}
		ultimo->next = nodo;
	}
	return (*head);
}
