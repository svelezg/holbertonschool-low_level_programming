#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 *
 * @list: array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *right, *left, *node_2, *node_3;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	right = (*list)->next;
	while (right)
	{	left = right->prev;
		while (left)
		{	node_2 = left->next;
			node_3 = left->next->next;
			if (left->n > node_2->n)
			{
				if (left->prev == NULL)
				{			*list = node_2;
							left->next = node_2->next;
							node_2->next = left;
							node_3->prev = left;
							node_2->prev = NULL; /*node_1->prev;*/
							left->prev = node_2;
					print_list(*list);
					break;
				}
				else if (node_2->next == NULL)
					left->next = NULL;
				else
					{ left->next = node_3; /* node_2->next */
					node_3->prev = left;
				}
				left->prev->next = node_2;
				node_2->next = left;
				node_2->prev = left->prev;
				left->prev = node_2;
				print_list(*list);
				left = left->prev->prev;
			}
			else
				break;
		}
		right = right->next;
	}
}
