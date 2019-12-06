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
	size_t index;
	bst_t *tree = NULL;

	if (!array || !size)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		bst_insert(&tree, array[index]);
	}

	return (tree);
}
