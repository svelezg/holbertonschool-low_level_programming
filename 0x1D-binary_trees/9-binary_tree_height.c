#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);


	/* height_l = tree->left ? 1 + _height(tree->left) : 0; */
	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);
	else
		height_l = 0;

	/* height_r = tree->right ? 1 + _height(tree->right) : 0; */
	if (tree->right)
	{
		/* printf("right %i\n", tree->right->n); */
		height_r = 1 + binary_tree_height(tree->right);
	}

	else
		height_r = 0;

	/* return (height_l > height_r ? height_l : height_r); */
	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);

}
