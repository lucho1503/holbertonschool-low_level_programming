#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree.
 * Return: height of the tree or 0 if fail.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	else
		return (1 + (binary_tree_height(tree->left),
		     binary_tree_height(tree->right)));
}
