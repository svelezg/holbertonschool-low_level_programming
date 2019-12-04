#include "binary_trees.h"

/**
 * binary_tree_height4 - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of a binary tree
 */

size_t binary_tree_height4(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);


	/* height_l = tree->left ? 1 + _height(tree->left) : 0; */
	if (tree->left)
		height_l = 1 + binary_tree_height4(tree->left);
	else
		height_l = 0;

	/* height_r = tree->right ? 1 + _height(tree->right) : 0; */
	if (tree->right)
	{
		/* printf("right %i\n", tree->right->n); */
		height_r = 1 + binary_tree_height4(tree->right);
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
 * binary_tree_balance2 - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of nodes with at least 1 child in a binary tree
 */

int binary_tree_balance2(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		height_left = 1 + binary_tree_height4(tree->left);
		/* printf("Height_left from %d: %lu\n", tree->left->n, height_left);*/
	}

	if (tree->right)
	{
		height_right = 1 + binary_tree_height4(tree->right);
		/*printf("Height from %d: %lu\n", tree->right->n, height_right);*/
	}
	return (height_left - height_right);
}



/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if complete 0 if not
 */



int binary_tree_is_complete(const binary_tree_t *tree)
{
	int complete_left = 1, complete_right = 1;

	if (!tree)
		return (0);

	if (tree->left)
		complete_left = binary_tree_is_complete(tree->left);
	if (tree->right)
		complete_right = binary_tree_is_complete(tree->right);


	/* printf("tree: %i\n", tree->n); */

	if (binary_tree_balance2(tree) > 1)
		return (0);

	if (tree->right && tree->left)
		return (complete_left * complete_right);

	if (tree->left && !tree->right)
	{
		if (tree->parent && tree->parent->right && tree->parent->right->left)
			return (0);
	}
	else if (!tree->left && tree->right)
		return (0);

	return (1);

}
