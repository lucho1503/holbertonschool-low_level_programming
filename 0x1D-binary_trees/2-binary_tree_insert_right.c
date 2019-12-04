#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to the right child
 * @parent: pointer to the node to insert.
 * @value: value to store in the node.
 * Return: new node or NULL if fail.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
	}
	return (new);
}
