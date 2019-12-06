#include "binary_trees.h"

/**
 * binary_tree_uncle - find a uncle of a node give.
 * @node: pointer to the node to find the uncle.
 * Return: uncle of node OR NULL if fail.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left && node->parent->parent->left->n
	    != node->parent->n)
		return (node->parent->parent->left);
	if (node->parent->parent->right && node->parent->parent->right->n
	    != node->parent->n)
		return (node->parent->parent->right);
	else
		return (NULL);
}
