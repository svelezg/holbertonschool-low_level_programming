#include "binary_trees.h"


/**
 * given_level - nodes at a given level
 *
 * @root: pointer to the root node of the tree to traverse
 * @level: current level
 * @func: pointer to a function to call for each node
 */
void given_level(binary_tree_t *root, int level, void (*func)(int))
{
	if (root == NULL)
		return;

	if (level == 1)
		func(root->n);
	else if (level > 1)
	{
		given_level(root->left, level - 1, func);
		given_level(root->right, level - 1, func);
	}
}



/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree,
		void (*func)(int))
{
	int height = 0, index = 0;


	if (tree != NULL && func != NULL)
	{
		height = binary_tree_height(tree);

		for (index = 1; index <= height + 1; index++)
			given_level((binary_tree_t *)tree, index, func);
	}
}
