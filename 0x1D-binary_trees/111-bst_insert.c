#include "binary_trees.h"

/**
 * bst_is - verify if nodes is insert.
 * @tree: pointer to the node to insert.
 * @value: value of the node.
 * Return: new node or NULL if fail.
 */

bst_t *bst_is(bst_t **tree, int value)
{
	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
			return (bst_is(&((*tree)->left), value));
	}

	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
			return (bst_is(&((*tree)->right), value));
	}
	return (NULL);
}

/**
 * bst_insert - inserts a new value in a binary tree.
 * @tree: double pointer to the root node of the BST
 * @value: value to insert in the tree
 * Return: a pointer to the node created
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	return (bst_is(tree, value));
}
