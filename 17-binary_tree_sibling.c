#include "binary_trees.h"

/**
 * binary_tree_sibling - locates l or r of sibling
 * @node: pointer to node
 *
 * Return: pointer to the sibling node
 *         null if parent null and node is nul
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}


