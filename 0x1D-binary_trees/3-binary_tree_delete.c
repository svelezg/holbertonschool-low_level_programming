#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: Pointer to the parent node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		/* printf("%d ", tree->n); */
		free(tree);
	}
}
