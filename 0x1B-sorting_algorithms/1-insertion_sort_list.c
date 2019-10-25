#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 *
 * @alist: array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *right, *left, *node_1, *node_2, *node_3;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	right = (*list)->next;
	while (right)
	{	left = right->prev;
		while (left)
		{	node_1 = left;
			node_2 = left->next;
			node_3 = left->next->next;
			if (node_1->n > node_2->n)
			{
				if (node_1->prev == NULL)
				{			*list = node_2;
							node_1->next = node_3; /* node_2->next */
							node_2->next = node_1;
							node_3->prev = node_1;
							node_2->prev = NULL; /*node_1->prev;*/
							node_1->prev = node_2;
					print_list(*list);
					break;
				}
				else if (node_2->next == NULL)
				{	node_1->prev->next = node_2;
					node_1->next = NULL;
					node_2->next = node_1;
					node_2->prev = node_1->prev;
					node_1->prev = node_2;
					print_list(*list);
					left = left->prev->prev;
				}
				else
					{
					node_1->prev->next = node_2;
					node_1->next = node_3; /* node_2->next */
					node_2->next = node_1;
					node_3->prev = node_1;
					node_2->prev = node_1->prev;
					node_1->prev = node_2;
					print_list(*list);
					left = left->prev->prev;
				}
			}
			else
				break;
		}
		right = right->next;
	}
}
