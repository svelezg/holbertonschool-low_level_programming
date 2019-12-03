#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (binary_tree_leaves(tree->left) + 1 +
			binary_tree_leaves(tree->right));
		}
		else
		{
			return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
		}

	}
	else
	return (0);
}
