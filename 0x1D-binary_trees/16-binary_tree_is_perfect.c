#include "binary_trees.h"

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

	balance = binary_tree_balance(tree);
	/*printf("%i balance: %i\n", tree->n, balance);*/

	if (balance == 0 && binary_tree_is_full(tree))
		return (1);
	else
		return (0);

}
