#include "binary_trees.h"
#include <limits.h>

/**
 * maxim - max value in the tree
 * @tree: pointer to the root node of the tree
 * Return: maximum value of the tree
 */

int maxim(const binary_tree_t *tree)
{
	int max, lmax, rmax;

	if (tree == NULL)
		return (INT_MIN);

	max = tree->n;
	lmax = maxim(tree->left);
	rmax = maxim(tree->right);
	if (lmax > max)
		max = lmax;
	if (rmax > max)
		max = rmax;
	return (max);
}


/**
 * minim - min value in the tree
 * @tree: pointer to the root node of the tree
 * Return: min value of the tree
 */

int minim(const binary_tree_t *tree)
{
	int min, lmin, rmin;

	if (tree == NULL)
		return (INT_MAX);
	min = tree->n;
	lmin = minim(tree->left);
	rmin = minim(tree->right);
	if (lmin < min)
		min = lmin;
	if (rmin < min)
		min = rmin;
	return (min);
}


/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree
 * @tree: pointer to the root node of the tree
 * Return: 1 if is bst or 0 if fail
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int i, j;

	if (tree == NULL)
		return (0);

	i = maxim(tree->left);
	j = minim(tree->right);
	if (tree->left != NULL)
	{
		if (i >= tree->n)
			return (0);
	}
	if (tree->right != NULL)
	{
		if (j <= tree->n)
			return (0);
	}
	return (1);
}
