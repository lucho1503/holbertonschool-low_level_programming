#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 * Return: Nothing.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->parent == NULL)
		func(tree->n);
	if (tree->left != NULL)
	{
		func(tree->left->n);
		binary_tree_levelorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		func(tree->right->n);
		binary_tree_levelorder(tree->right, func);
	}
}
