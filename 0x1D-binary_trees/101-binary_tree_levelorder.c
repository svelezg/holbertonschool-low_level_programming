#include "binary_trees.h"

/**
 * binary_tree_height3 - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of a binary tree
 */

size_t binary_tree_height3(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);


	/* height_l = tree->left ? 1 + _height(tree->left) : 0; */
	if (tree->left)
		height_l = 1 + binary_tree_height3(tree->left);
	else
		height_l = 0;

	/* height_r = tree->right ? 1 + _height(tree->right) : 0; */
	if (tree->right)
	{
		/* printf("right %i\n", tree->right->n); */
		height_r = 1 + binary_tree_height3(tree->right);
	}

	else
		height_r = 0;

	/* return (height_l > height_r ? height_l : height_r); */
	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);

}


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
		height = binary_tree_height3(tree);

		for (index = 1; index <= height + 1; index++)
			given_level((binary_tree_t *)tree, index, func);
	}
}
