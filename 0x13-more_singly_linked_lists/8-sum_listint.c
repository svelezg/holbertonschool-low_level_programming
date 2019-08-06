#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * sum_listint - Returns the nth node of a listint_t linked list.
 * @head: Head pointer
 * Return: sum all.
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head == NULL)
		return (0);

	node = head;

	while (node->next != NULL)
	{
/*		printf("sum = %i\n", sum);*/
/*		printf("n = %i\n", node->n);*/
		sum = sum + node->n;
		node = node->next;
	}
	sum = sum + node->n;

	return (sum);
}
