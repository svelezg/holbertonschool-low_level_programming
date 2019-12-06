#include "binary_trees.h"

/**
 * binary_tree_rotate_left - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *P, *B, *A;

	if (!tree)
		return (NULL);

	A = tree;
	P = A->parent;
	B = A->right;
	A->right = B->left;

	if (B->left)
		B->left->parent = A;

	B->left = A;
	A->parent = B;
	B->parent = P;

	if (P)
	{
		if (P->right == A)
			P->right = B;
		else
			P->left = B;
	}
	return (B);
}
