#include "sort.h"

/**
 * cocktail_sort_list - Sorting a linked list of numbers using cocktail sort
 * @list: Linked list (Double pointer)
 * Return: Nothing
**/

void cocktail_sort_list(listint_t **list)
{

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	algorithm_cocktail_sort(list);
}

/**
 * algorithm_cocktail_sort - Sorting a list using cocktail sort
 * @list: Linked list (Double pointer)
 * Return: Nothing
**/

void algorithm_cocktail_sort(listint_t **list)
{
	listint_t *tmp, *node1, *node2;
	int swap_counter = 1;

	node1 = *list;
	node2 = (*list)->next;
	while (swap_counter > 0)
	{
		swap_counter = 0;
		while (node2 != NULL)
		{
			if (node1->n > node2->n)
			{
				swap_nodes(list, node1, node2);
				tmp = node1;
				node1 = node2;
				node2 = tmp;
				print_list(*list);
				swap_counter += 1;
			}
			node1 = node1->next;
			node2 = node2->next;
		}
		node2 = node1;
		node1 = node1->prev;
		while (node1 != NULL)
		{
			if (node1->n > node2->n)
			{ swap_nodes(list, node1, node2);
				tmp = node1;
				node1 = node2;
				node2 = tmp;
				print_list(*list);
				swap_counter += 1;
			}
			node1 = node1->prev;
			node2 = node2->prev;
		}
		node1 = (*list);
		node2 = (*list)->next;
	}
}

/**
 * swap_nodes - Sorting an array of number using counting sort
 * @head: Double pointer to the linked list's head
 * @node1: Node 1
 * @node2: Node 2
 * Return: Nothing
**/

void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	if (head == NULL || *head == NULL || node1 == NULL || node2 == NULL)
		return;

	if (node1->prev == NULL)
		*head = node2;
	else
		(node1->prev)->next = node2;

	if (node2->next != NULL)
		(node2->next)->prev = node1;

	node2->prev = node1->prev;
	node1->next = node2->next;
	node2->next = node1;
	node1->prev = node2;
}
