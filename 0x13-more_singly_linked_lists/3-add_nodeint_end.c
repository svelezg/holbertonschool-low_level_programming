#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Head pointer
 * @n: Integer
 * Return: list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last;

	if (head == NULL)
		return (NULL);

/* 1. allocate node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	last = *head;  /* used in step 5*/

/* 2. put in the data  */
	new_node->n = n;

/* 3. This new node is going to be the last node, so make next of it as NULL*/
	new_node->next = NULL;

/* 4. If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

/* 5. Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

/* 6. Change the next of last node */
	last->next = new_node;
	return (*head);
}
