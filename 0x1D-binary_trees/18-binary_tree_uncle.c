#include "binary_trees.h"

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
