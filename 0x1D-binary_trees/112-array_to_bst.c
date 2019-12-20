#include "binary_trees.h"

/**
 * array_to_bst - builds a BST from an array
 * @array: in a pointer to the first element of array
 * @size: size of array
 * Return: pointer to the root node created or NULL if fail
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *node = NULL;
	size_t i;

	for (i = 0; i < size; i++)
		bst_insert(&node, array[i]);

	if (i == size)
		return (node);

	return (NULL);
}
