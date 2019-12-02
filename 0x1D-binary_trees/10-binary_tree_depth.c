#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of a binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	const binary_tree_t *temporal;

	if (tree == NULL)
		return (0);

	temporal =  tree;

	while (temporal->parent != 0)
	{
		temporal = temporal->parent;
		count++;
	}

	return (count);
}
