#include "binary_trees.h"

/**
 * binary_tree_is_leaf1 - checks if a node is a leaf
 *
 * @node: Pointer to the node
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf1(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}



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

	if (!binary_tree_is_leaf1(tree))
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
