#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: pointer to the node to the find sibling
 * Return: NULL if fail OR node sibling of a node given.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->left->n != node->n)
		return (node->parent->left);
	if (node->parent->right != NULL && node->parent->right->n != node->n)
		return (node->parent->right);
	else
		return (NULL);
}
