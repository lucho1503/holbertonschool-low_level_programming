#include "lists.h"

/**
 * add_nodeint - entry point whit one pointer to function.
 * @head: double pointer type struct listint_t.
 * @n: store a integer.
 * Return: adrress to new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodo;

	nodo = malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		return (NULL);
	}
	nodo->next = *head;
	*head = nodo;
	nodo->n = n;
	return (*head);
}
