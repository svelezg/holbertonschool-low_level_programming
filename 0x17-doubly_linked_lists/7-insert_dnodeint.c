#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Head pointer
 * @idx: index
 * @n: value
 * Return: nth node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t)); /* 1. allocate node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* 2. put in the data  */

	if (idx == 0) /* 3. Make next of new node as head */
	{	new_node->next = *h;
		*h = new_node; /* 4. move the head to point to the new node */
		new_node->prev = NULL;  /* prev of new_node to NULL */
		return (new_node);
	}
	else
		node = *h;

	while (i != idx - 1)  /* traverse list */
	{
		if (node->next != NULL)
		{	node = node->next;
			i++;
		}
		else
			return (NULL);
	}

	new_node->next = node->next;
	node->next = new_node;
	new_node->prev = node; /* 6. Make prev_node as previous of new_node */
	if (new_node->next != NULL)
		new_node->next->prev = new_node; /* 7. Change prev of new_node's next node */

	return (new_node);
}

