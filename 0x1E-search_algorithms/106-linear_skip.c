#include "search_algos.h"
#include <math.h>

/**
* linear_skip - ssearches for a value in a sorted skip list of integers.
*
* @list: pointer to the head of the list to search in
* @value: value to search for
* Return: first index where value is located
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t index = 0;
	skiplist_t *head, *right_head;

	if (!list)
		return (NULL);
	head = list;
	right_head = list;


	while (right_head->n < value)
	{

		head = right_head;
		if (!right_head->express)
		{
			while (right_head->next)
				right_head = right_head->next;
			break;
		}

		right_head = right_head->express;
		printf("Value checked at index [%li] = [%i]\n",
				right_head->index, right_head->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", head->index,
	       right_head->index);
	index = head->index;

	while (head->index <= right_head->index)
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
