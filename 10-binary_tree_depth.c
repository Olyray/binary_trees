#include "binary_trees.h"

/**
 * check_depth - check for the depth of a tree
 * @tree: the tree to check
 * Return: the depth
 */
size_t check_depth(const binary_tree_t *tree)
{
	size_t check_parent;

	if (tree == NULL)
		return (0);
	check_parent = check_depth(tree->parent);
	check_parent++;
	return (check_parent);
}

/**
 * binary_tree_depth - check for the depth of a tree
 * @tree: the tree to be checked
 * Return: the final depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t raw_depth, final_depth;

	if (tree == NULL)
		return (0);
	raw_depth = check_depth(tree);
	final_depth = raw_depth - 1;
	return (final_depth);
}
