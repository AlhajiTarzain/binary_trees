#include "binary_trees.h"

/**
 * binary_tree_is_root - ia node a root
 * @node: node in question
 *
 * Return: 1 if  root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}


