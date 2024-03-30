int binary_tree_is_leaf(const binary_tree_t *node)

/**
 * binary_tree_is_leaf - checks if a node leaf
 * @node: node in question
 *
 * Return:1 for leaf 0 for otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return 0;
	}
	else if (node->left == NULL && node->right == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

