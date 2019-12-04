#include "binary_trees.h"

/**
 * binary_tree_is_leaf2 - checks if a node is a leaf
 *
 * @node: Pointer to the node
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf2(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}


/**
 * binary_tree_is_full1 - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if full 0 otherwise
 */


int binary_tree_is_full1(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!binary_tree_is_leaf2(tree))
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
 * binary_tree_height2 - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of a binary tree
 */

size_t binary_tree_height2(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);


	/* height_l = tree->left ? 1 + _height(tree->left) : 0; */
	if (tree->left)
		height_l = 1 + binary_tree_height2(tree->left);
	else
		height_l = 0;

	/* height_r = tree->right ? 1 + _height(tree->right) : 0; */
	if (tree->right)
	{
		/* printf("right %i\n", tree->right->n); */
		height_r = 1 + binary_tree_height2(tree->right);
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
 * binary_tree_balance1 - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of nodes with at least 1 child in a binary tree
 */

int binary_tree_balance1(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		height_left = 1 + binary_tree_height2(tree->left);
		/* printf("Height_left from %d: %lu\n", tree->left->n, height_left);*/
	}

	if (tree->right)
	{
		height_right = 1 + binary_tree_height2(tree->right);
		/*printf("Height from %d: %lu\n", tree->right->n, height_right);*/
	}
	return (height_left - height_right);
}



/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if perfect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)

{
	int balance;

	if (!tree)
		return (0);

	balance = binary_tree_balance1(tree);
	/*printf("%i balance: %i\n", tree->n, balance);*/

	if (balance == 0 && binary_tree_is_full1(tree))
		if ((binary_tree_is_perfect(tree->left) +
		     binary_tree_is_perfect(tree->right)) % 2 == 0)
			return (1);
		else
			return (0);
	else
		return (0);

}
