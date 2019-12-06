#include "binary_trees.h"

/**
 * binary_tree_rotate_right - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *P, *B, *A;

	if (!tree)
		return (NULL);

	A = tree;
	P = A->parent;
	B = A->left;
	A->left = B->right;

	if (B->right)
		B->right->parent = A;

	B->right = A;
	A->parent = B;
	B->parent = P;

	if (P)
	{
		if (P->left == A)
			P->left = B;
		else
			P->right = B;
	}
	return (B);
}
