#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Head pointer
 * @index: index
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;

	while (i != index)
	{
		if (node->next != NULL)
		{
			node = node->next;
			i++;
		}
		else
			return (NULL);
	}

	return (node);
}
