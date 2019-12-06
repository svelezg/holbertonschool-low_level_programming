#include "binary_trees.h"


/**
 * my_bst - checks if a binary tree is a valid Binary Search Tree
 *
 * @node: pointer to the node to evaluate
 * @min: min value
 * @max: max value
 * Return: if tree is a valid BST, and 0 otherwise
 */

int my_bst(binary_tree_t *node, int min, int max)
{

	if (node == NULL)
		return (1);

	if (node->n < min || node->n > max)
		return (0);

	return (my_bst(node->left, min, node->n - 1) &&
	my_bst(node->right, node->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: pointer to the root node of the tree to rotate
 * Return: if tree is a valid BST, and 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (my_bst((binary_tree_t *) tree, -999999999, 99999999));
}
