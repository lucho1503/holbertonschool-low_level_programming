#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root.
 * @node: pointer to the node to check
 * Return: 1 if node is root else 0. if node is NULL 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right != NULL && node->left != NULL)
		return (1);
	else
		return (0);
}
