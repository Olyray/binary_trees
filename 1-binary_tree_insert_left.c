#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node to the left
 * @parent: the parent of the binary tree
 * @value: the value for the binary tree
 * Return: The created binary tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;
	binary_tree_t *node_pointer;

	if (parent == NULL)
		return (NULL);
	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);
	left_node->n = value;
	left_node->left = NULL;
	left_node->right = NULL;
	left_node->parent = parent;
	if (parent->left == NULL)
		parent->left = left_node;
	else
	{
		node_pointer = parent->left;
		parent->left = left_node;
		node_pointer->parent = left_node;
		left_node->left = node_pointer;
	}
	return (left_node);
}
