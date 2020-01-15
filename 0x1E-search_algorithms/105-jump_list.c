#include "search_algos.h"
#include <math.h>

/**
* jump_list - searches for a value in a sorted array of
		* integers using the Jump search algorithm
*
* @list: pointer to the head of the list to search in
* @size: nnumber of nodes in list
* @value: value to search for
* Return: first index where value is located
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t right = 0, left = 0, index = 0;
	listint_t *head, *right_head;

	if (!list)
		return (NULL);
	head = list;
	right_head = list;
	right = sqrt(size);/* Finding block size to be jumped*/
	while (right_head->index < right)
		right_head = right_head->next;
	while ((right_head->n < value) && (right < size))
	{	printf("Value checked at index [%li] = [%i]\n", right, right_head->n);
		left = right;
		right = right + sqrt(size);
		head = right_head;
		while (right_head->index < right)
		{
			if (!right_head->next)
				break;
			right_head = right_head->next;
		}
		if (left >= size)
			return (NULL);
	}
	printf("Value checked at index [%li] = [%i]\n", right_head->index,
			right_head->n);
	printf("Value found between indexes [%d] and [%ld]\n", (int)left,
			right_head->index);
	index = left;
	while (head->index <= right)
	{
		printf("Value checked at index [%i] = [%i]\n", (int)index, head->n);
		if (head->n == value)
			return (head);
		if (!head->next)
			return (NULL);
		head = head->next;
		index++;
	}
	return (NULL);
}
