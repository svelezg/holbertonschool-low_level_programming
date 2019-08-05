#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t.
 * @head: Head pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *d_node;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

/* Store head node */
	d_node = *head;
/* If head node itself is to be deleted (idex == 0) */
	if (d_node != NULL && index == 0)
	{
	/* Changed head */
		*head = d_node->next;
	/* free old head */
		free(d_node);
		return (1);
	}

/* Search for the index to be deleted, keep track of the*/
/* previous node as we need to change 'node->next'*/
	while (d_node != NULL && i != index)
	{
		node = d_node;
		d_node = d_node->next;
		i++;
	}

/* If index exceeds linked list */
	if (d_node == NULL && i <= index)
		return (-1);
/* Unlink the node from linked list*/
	node->next = d_node->next;
/* Free memory */
	free(d_node);
	return (1);
}


