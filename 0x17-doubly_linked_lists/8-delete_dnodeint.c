#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a listint_t.
 * @head: Head pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	dlistint_t *d_node;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	d_node = *head; /* Store head node */
	if (d_node->next == NULL && index == 0)
	{	free(*head);
		*head = NULL;
		return (1);
	}

	if (d_node != NULL && index == 0) /* If head node to be deleted (idex == 0) */
	{	*head = d_node->next; /* Changed head */
		d_node->next->prev = *head; /* prev of second node to head */
		free(d_node); /* free old head */
		return (1);
	}

	while (d_node != NULL && i <= index) /* Search for index to be del, track*/
	{	node = d_node; /* of previous node as we need to change 'node->next'*/
		d_node = d_node->next;
		i++;
		printf("i= %i (d_node: %i) (node: %i) \n", i, d_node->n, node->n);
	}

	if (d_node == NULL && i <= index) /* If index exceeds linked list */
		return (-1);

	if (d_node->next != NULL)
	{	node->next = d_node->next; /* Unlink (next) the node from linked list*/
		if (d_node->next != NULL)
			d_node->next->prev = node; /* Unlik (prev) the node from linked list*/
	}
	else
		*head = NULL;
	free(d_node); /* Free memory */
	return (1);
}
