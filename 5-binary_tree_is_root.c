#include "binary_trees.h"

/**
 * binary_tree_is_root - check is a node is the root
 * @node: the node to be checked
 * Return: 1 if it's the root, 0 if it's not.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
