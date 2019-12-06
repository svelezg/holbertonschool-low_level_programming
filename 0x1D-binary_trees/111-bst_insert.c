#include "binary_trees.h"


/**
 * bst_insert - inserts a value in a Binary Search Tree
 *
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = NULL, *aux = NULL;

	if (!(*tree))
	{
		node = binary_tree_node(*tree, value);
		*tree = node;
		return (*tree);
	}

	node = *tree;
	while (node)
	{
		aux = node;
		if (node->n == value)
			return (NULL);

		if (value > node->n)
			node = node->right;
		else
			node = node->left;
	}

	if (value > aux->n)
	{
		aux->right = binary_tree_node(aux, value);
		return (aux->right);
	}
	else
	{
		aux->left = binary_tree_node(aux, value);
		return (aux->left);
	}
}
