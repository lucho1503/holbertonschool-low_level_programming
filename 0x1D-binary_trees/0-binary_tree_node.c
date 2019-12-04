#include "binary_trees.h"

/**
 * binary_tree_node - create a new binary tree node
 * @parent: is a pointer to parent node of the node create
 * @value: is the value to put in the new node.
 * Return: new node or NULL if fail.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
