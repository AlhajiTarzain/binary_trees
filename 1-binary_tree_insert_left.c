#include "binary_trees.h"

/**
 * binary_tree_insert_left - puts a new node to the lf of a parent node
 * @parent: ptr to insert to left
 * @value: content of left node
 * Return: pointer to left node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left)
		parent->left->parent = new_node;
	parent->left = new_node;

	return (new_node);
}

