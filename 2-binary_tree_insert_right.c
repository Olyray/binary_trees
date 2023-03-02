#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node to the left
 * @parent: the parent of the binary tree
 * @value: the value for the binary tree
 * Return: The created binary tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;
	binary_tree_t *node_pointer;

	if (parent == NULL)
		return (NULL);
	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);
	right_node->n = value;
	right_node->left = NULL;
	right_node->right = NULL;
	right_node->parent = parent;
	if (parent->right == NULL)
		parent->right = right_node;
	else
	{
		node_pointer = parent->right;
		parent->right = right_node;
		node_pointer->parent = right_node;
		right_node->right = node_pointer;
	}
	return (right_node);
}
