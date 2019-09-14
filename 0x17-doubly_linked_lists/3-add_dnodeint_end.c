#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlist_t list.
 * @head: Head pointer
 * @n: Data
 * Return: list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* 1. allocate node */
	if (new_node == NULL)
		return (NULL);
	last = *head;  /* used in step 5*/

	new_node->n = n; /* 2. put in the data  */

	new_node->next = NULL; /* 3. New node to last node, next of it as NULL*/

	if (*head == NULL) /* 4. If Linked List is empty, new node as head */
	{	*head = new_node;
		return (*head);
	}
	while (last->next != NULL) /* 5. Else traverse till the last node */
		last = last->next;

	last->next = new_node; /* 6. Change the next of last node */
	new_node->prev = last; /* 6. Prev of new node to last node */
	return (*head);
}
