#include "binary_trees.h"

/**
 * calculate_leaves - count the number of leaves
 * @tree: the node
 * @leaf_size: the counter for the leaf size
 * Return: the number of leaves
 */
size_t calculate_leaves(const binary_tree_t *tree, size_t leaf_size)
{
	if (tree->left == NULL && tree->right == NULL)
		leaf_size++;
	if (tree->left)
		leaf_size = calculate_leaves(tree->left, leaf_size);
	if (tree->right)
		leaf_size = calculate_leaves(tree->right, leaf_size);
	return (leaf_size);
}

/**
 * binary_tree_leaves - calculate the number of leaves in a binary tree
 * @tree: the node in question
 * Return: the number of binary trees
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t final_size, leaf_size;

	if (tree == NULL)
		return (0);
	final_size = calculate_leaves(tree, leaf_size = 0);
	return (final_size);
}
