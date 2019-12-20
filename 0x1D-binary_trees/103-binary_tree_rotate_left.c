#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotation-left on a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 on success, error code on failure
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	new = tree->right;
	new->parent = tree->parent;
	tree->parent = new;
	tree->right = new->left;

	if (tree->right != NULL)
		tree->right->parent = tree;

	new->left = tree;
	return (new);
}
