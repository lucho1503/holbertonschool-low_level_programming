#include "binary_trees.h"

/**
 * binary_tree_delete - delete a entires binary tree.
 * @tree: pointre to the root node of the tree delete.
 * Return: NOthing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
