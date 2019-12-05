#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree.
 * Return: height of the tree or 0 if fail.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		size_t l = 1, r = 1;

		if (tree->left)
			l = l + binary_tree_height(tree->left);
		if (tree->right)
			r = r + binary_tree_height(tree->right);

		if (l > r)
			return (l);
		else
			return (r);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of the tree.
 * Return: balance of the tree or 0 if fail.
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
