#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree with inorder
 * @tree: the node of the tree
 * @func: a function to print the details of the tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
