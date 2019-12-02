#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the parent node
 * @value: value
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temporal;

	if (parent == NULL)
		return (NULL);


	if (parent->left != NULL)
		{
		temporal = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = temporal;
		temporal->parent = parent->left;
		}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);

}
