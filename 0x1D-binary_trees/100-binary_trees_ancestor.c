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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: pointer to the first node
 * @second: pointer to a second node
 * Return: 0 if fail otherwise the lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t f_depth, s_depth, dif = 0, count = 0;
	binary_tree_t *new = (binary_tree_t *)first,
		*new2 = (binary_tree_t *)second;

	if (first == NULL || second == NULL)
		return (NULL);

	f_depth = binary_tree_depth(first);
	s_depth = binary_tree_depth(second);

	if (f_depth > s_depth)
	{
		dif = f_depth - s_depth;
		while (dif != count)
		{
			new = new->parent;
			count++;
		}
	}
	else
	{
		dif = s_depth - f_depth;
		while (dif != count)
		{
			new2 = new2->parent;
			count++;
		}
	}
	while (new != new2)
	{
		new = new->parent;
		new2 = new2->parent;
	}
	return (new);
}
