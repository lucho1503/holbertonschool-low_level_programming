#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the tree.
 * @tree: pointer to the root node of the tree
 * Return: 0 if fail or size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
