#include "binary_trees.h"


/**
 * array_to_bst - builds a Binary Search Tree from an array
 *
 * @array: is a pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: pointer to the root node of the created BST, or NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t index = 0;
	bst_t *tree, *root;

	root = bst_insert(&tree, array[0]);
	tree = root;

	for (index = 1; index < size; index++)
	{
		tree = bst_insert(&root, array[index]);
	}

	return (root);
}
