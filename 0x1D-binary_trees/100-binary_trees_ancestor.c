#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp_first, *temp_second;

	if (first && first->parent)
		temp_first = first;
	else
		return (NULL);

	if (!second || !second->parent)
		return (NULL);

	while (temp_first)
	{
		temp_second = second;
		while (temp_second)
		{
			if (temp_first->n == temp_second->n)
				return ((binary_tree_t *)temp_first);
			temp_second = temp_second->parent;
		}
		temp_first = temp_first->parent;
	}
	return (NULL);
}
