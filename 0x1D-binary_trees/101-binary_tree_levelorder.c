#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree.
 * Return: height of the tree or 0 if fail.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree != NULL)
	{
		if (tree->left)
			l = 1 + binary_tree_height(tree->left);
		if (tree->right)
			r = 1 + binary_tree_height(tree->right);

		if (l > r)
			return (l);
		else
			return (r);
	}
	else
		return (0);
}

/**
 * level_print - print the nodes in the same level
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 * @count: level of pointer
 * Return: Nothing.
 */

void level_print(const binary_tree_t *tree, void (*func)(int), int count)
{
	if (tree != NULL && func != NULL)
	{
		if (count == 0)
			func(tree->n);
		else if (count > 0)
		{
			level_print(tree->left, *func, count - 1);
			level_print(tree->right, *func, count - 1);
		}
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 * Return: Nothing.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level = 0, count = 0;

	if (tree == NULL || func == NULL)
		return;

	level = binary_tree_height(tree);

	for (count = 0; count <= level; count++)
	{
		level_print(tree, *func, count);
	}
}
