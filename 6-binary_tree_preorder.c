#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree with pre-order
 * @tree: the node of the tree
 * @func: a function to print the details of the tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
