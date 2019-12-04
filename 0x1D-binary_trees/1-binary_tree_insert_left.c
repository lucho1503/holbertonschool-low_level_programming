#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left-child of another node.
 * @parent: pointer to the node to insert.
 * @value: value to store in the new node.
 * Return: new node o NULL if fail.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
		parent->left = new;
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}
	return (new);
}
