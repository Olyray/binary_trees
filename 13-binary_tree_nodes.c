#include "binary_trees.h"

/**
 * count_nodes - count the number of nodes
 * @tree: the node
 * @node_count: the counter for the nodes
 * Return: the number of nodes
 */
size_t count_nodes(const binary_tree_t *tree, size_t node_count)
{
	if (tree->left != NULL || tree->right != NULL)
		node_count++;
	if (tree->left)
		node_count = count_nodes(tree->left, node_count);
	if (tree->right)
		node_count = count_nodes(tree->right, node_count);
	return (node_count);
}

/**
 * binary_tree_nodes - calculate the number of nodes
 * @tree: the node in question
 * Return: the number of binary trees
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t final_size, node_count;

	if (tree == NULL)
		return (0);
	final_size = count_nodes(tree, node_count = 0);
	return (final_size);
}
