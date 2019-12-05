#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is a full binary tree.
 * @tree: pointer to the root node of the tree
 * Return: 0 if fail or 1 if is a full binary tree.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left && tree->right && tree->parent)
		return (1);
	else
		return (0);
}
