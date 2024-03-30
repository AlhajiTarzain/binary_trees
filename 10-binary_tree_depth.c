#include "binary_trees.h"

/**
 * binary_tree_depth -deepness of tree
 * @tree: node
 *
 * Return: deepness o
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
