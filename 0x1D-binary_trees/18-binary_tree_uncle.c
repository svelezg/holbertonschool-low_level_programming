#include "binary_trees.h"

/**
 * binary_tree_sibling1 - finds the sibling of a node
 *
 * @node: pointer to the root node of the tree to traverse
 * Return: 1 if perfect 0 otherwise
 */

binary_tree_t *binary_tree_sibling1(binary_tree_t *node)

{
	int temp;

	if (!node || !node->parent)
		return (NULL);

	temp = node->n;

	if (node->parent)
		node = node->parent;

	if (node->left && node->left->n != temp)
		return (node->left);

	if (node->right && node->right->n != temp)
		return (node->right);

	return (NULL);
}


/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the root node of the tree to traverse
 * Return: 1 if perfect 0 otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
