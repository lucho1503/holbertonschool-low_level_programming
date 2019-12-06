#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);

	root->left = binary_tree_node(root, 12);
	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 16);
	root->left->right->left = binary_tree_node(root->left->right, 9);
	root->left->left->left = binary_tree_node(root->left->left, 3);
	root->left->left->right = binary_tree_node(root->left->left, 15);
	root->left->right->right = binary_tree_node(root->left->right, 92);
	root->left->right->right->left = binary_tree_node(root->left->right->right, 33);
	root->left->right->left->right = binary_tree_node(root->left->right->left, 39);
	root->left->right->right->right = binary_tree_node(root->left->right->right, 36);
	root->left->right->left->left = binary_tree_node(root->left->right->left, 31);
	root->left->left->left->left = binary_tree_node(root->left->left->left, 66);
	root->left->left->left->right = binary_tree_node(root->left->left->right, 55);
	root->left->left->right->left = binary_tree_node(root->left->left->right, 44);
	root->left->left->right->right = binary_tree_node(root->left->left->right, 22);
	
	root->right = binary_tree_node(root, 402);
	root->right->left = binary_tree_node(root->right, 256);
	root->right->right = binary_tree_node(root->right, 512);
	root->right->left->left = binary_tree_node(root->right->left, 999);
	root->right->right->right = binary_tree_node(root->right->right, 888);
	root->right->right->left = binary_tree_node(root->right->right, 777);
	root->right->left->right = binary_tree_node(root->right->right, 666);
	root->right->left->right->left = binary_tree_node(root->right->left->right, 555);
	root->right->left->right->right = binary_tree_node(root->right->right->right, 444);
	root->right->left->left->left = binary_tree_node(root->right->left->left, 109);
	root->right->left->left->right = binary_tree_node(root->right->left->right, 103);
	root->right->right->left->left = binary_tree_node(root->right->right->left, 721);
	root->right->right->left->right = binary_tree_node(root->right->right->right, 708);
	root->right->right->right->left = binary_tree_node(root->right->right->left, 899);
	root->right->right->right->right = binary_tree_node(root->right->right->right, 823);
	
	binary_tree_print(root);
	return (0);
}
