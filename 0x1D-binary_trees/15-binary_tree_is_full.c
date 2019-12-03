#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if full 0 otherwise
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!binary_tree_is_leaf(tree))
	{
		if ((binary_tree_is_full(tree->left) +
		binary_tree_is_full(tree->right)) % 2 == 0)
			return (1);
		else
			return (0);
	}
	else
	return (1);
}
