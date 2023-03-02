#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: the node to check
 * Return: 1 if the node is a leaf, 0 if it isn't.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node->left != NULL)
		binary_tree_is_leaf(node->left);
	if (node->right != NULL)
		binary_tree_is_leaf(node->right);
	return (0);
}
