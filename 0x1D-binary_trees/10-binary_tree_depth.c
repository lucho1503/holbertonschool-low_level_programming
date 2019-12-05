#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth  of a node in tree.
 * @tree: pointer to node to measure to depth
 * Return: 0 if fail otherwise the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
