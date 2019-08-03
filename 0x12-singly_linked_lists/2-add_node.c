#include "lists.h"

/**
 * *add_node - entry point.
 * @head: first element of linked list.
 * @str: element of struct that store a string.
 * Return: direccion of memeory the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *primero;
	int i = 0;

	while (str[i])
	{
		i++;
	}
	primero = malloc(sizeof(list_t));
	if (primero == NULL)
	{
		return (NULL);
	}
	primero->str = strdup(str);
	primero->len = i;
	primero->next = *head;
	*head = primero;
	return (*head);
}
