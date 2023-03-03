#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of a binary tree
 * @tree: the root of the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t initial_height, final_height;

	if (tree == NULL)
		return (0);
	initial_height = calculate_height(tree);
	final_height = initial_height - 1;
	return (final_height);
}

/**
 * calculate_height - calculate the height of a binary tree
 * @tree: the root of the tree
 * Return: the height
 */
size_t calculate_height(const binary_tree_t *tree)
{
	size_t left, right, height;

	if (tree == NULL)
		return (0);
	left = calculate_height(tree->left);
	right = calculate_height(tree->right);
	if (left > right)
		height = 1 + left;
	else
		height = 1 + right;
	return (height);
}
