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

	if (tree->left)
		height_l = 1 + binary_tree_height4(tree->left);
	else
		height_l = 0;

	if (tree->right)
		height_r = 1 + binary_tree_height4(tree->right);
	else
		height_r = 0;

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
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + (int)binary_tree_height4(tree->left);

	if (tree->right)
		height_right = 1 + (int)binary_tree_height4(tree->right);

	return (height_left - height_right);
}

/**
 * binary_tree_is_full1 - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if full 0 otherwise
 */


int binary_tree_is_full1(const binary_tree_t *tree)
{
	int leaf = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaf = 1;
	else
		leaf = 0;

	if (leaf == 0)
	{
		if ((binary_tree_is_full1(tree->left) +
		     binary_tree_is_full1(tree->right)) % 2 == 0)
			return (1);
		else
			return (0);
	}
	else
		return (1);
}

/**
 * binary_tree_is_perfect1 - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if perfect 0 otherwise
 */

int binary_tree_is_perfect1(const binary_tree_t *tree)

{
	int balance;

	if (!tree)
		return (0);

	balance = binary_tree_balance2(tree);

	if (balance == 0 && binary_tree_is_full1(tree))
		if ((binary_tree_is_perfect1(tree->left) +
		     binary_tree_is_perfect1(tree->right)) % 2 == 0)
			return (1);
		else
			return (0);
	else
		return (0);
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

	if (!tree || binary_tree_balance2(tree) < 0 || binary_tree_balance2(tree) > 1)
		return (0);

	if (tree->left)
		complete_left = binary_tree_is_complete(tree->left);

	if (tree->right)
		complete_right = binary_tree_is_complete(tree->right);

	if (binary_tree_balance2(tree) == 1)
		return (complete_left * complete_right);

	if (binary_tree_balance2(tree) == 0)
	{
		if (!tree->right || (tree->left && binary_tree_is_perfect1(tree->left)))
			return (complete_left * complete_right);
		else
			return (0);
	}
	return (0);
}
