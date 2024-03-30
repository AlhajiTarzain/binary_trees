#include "binary_trees.h"

/**
 * binary_tree_size - size of a binary tree.
 * @tree: Pointer to  tree t.
 *
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	const binary_tree_t *current = NULL;
	binary_tree_t *previous = NULL;

	if (!tree)
		return (0);

	current = tree;
	while (current)
	{
		if (!current->left)
		{
			size++;
			current = current->right;
		}
		else
		{
			previous = current->left;
			while (previous->right && previous->right != current)
				previous = previous->right;

			if (!previous->right)
			{
				previous->right = current;
				current = current->left;
			}
			else
			{
				previous->right = NULL;
				size++;
				current = current->right;
			}
		}
	}

	return (size);
}
