#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the parent node
 * @value: value
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temporal;

	if (parent == NULL)
		return (NULL);


	if (parent->right != NULL)
		{
		temporal = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = temporal;
		temporal->parent = parent->right;
		}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);

}
