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
	return (binary_tree_size(tree->left) + 1
		+ binary_tree_size(tree->right));
}

/**
 * is_complete - verify if tree is complete
 * @tree: pointer to the node root
 * @index: index of node
 * @size: size of tree.
 * Return: 1 if is complete, else 0
 */

int is_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);

	return (is_complete(tree->left, (index * 2) + 1, size) &&
		is_complete(tree->right, (index * 2) + 2, size));
}

/**
 * binary_tree_is_complete - checks the nodes if is complete
 * @tree: pointer to the root node of the tree.
 * Return: 1 if is complete, else 0.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	return (is_complete(tree, 0, size));
}
