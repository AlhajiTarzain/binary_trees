#include "binary_trees.h"

/**
 * binary_tree_depth - how deep is the tree
 * @tree: deepness of selected tree
 *
 * Return: depneess of tree node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deepness = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		deepness++;
		tree = tree->parent;
	}

	return (deepness);
}

