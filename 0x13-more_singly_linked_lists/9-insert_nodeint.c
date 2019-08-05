#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Head pointer
 * @idx: index
 * @n: value
 * Return: nth node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	/* 1. allocate node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* 2. put in the data  */
	new_node->n = n;

	/* 3. Make next of new node as head */
	if (idx == 0)
	{
		new_node->next = *head;
	/* 4. move the head to point to the new node */
		*head    = new_node;
		return (new_node);
	}
	else
		node = *head;

	while (i != idx - 1)
	{
		if (node->next != NULL)
		{
			node = node->next;
			i++;
		}
		else
			return (NULL);
	}

	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}

