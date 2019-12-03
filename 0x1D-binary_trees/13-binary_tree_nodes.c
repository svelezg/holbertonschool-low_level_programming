#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (binary_tree_nodes(tree->left) +
					binary_tree_nodes(tree->right));
		}
		else
		{
			return (binary_tree_nodes(tree->left) + 1 +
					binary_tree_nodes(tree->right));
		}
	}
	else
		return (0);

}
