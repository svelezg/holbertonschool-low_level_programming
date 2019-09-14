#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a list_t list.
 * @head: Head pointer
 * @n: Data
 * Return: dlist.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *head_node;

	if (head == NULL)
		return (NULL);

	head_node = *head;

	new_node = malloc(sizeof(dlistint_t)); /* 1. allocate node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* 2. put in the data  */

	new_node->next = (head_node); /* 3. Make next of new node as head */

	new_node->prev = NULL; /* 4. Make prev of new node as NULL */

	if (head_node != NULL)
		head_node->prev = new_node; /*5. change prev of head node to new node */

	*head = new_node; /* 6. move the head to point to the new node */

	return (*head);
}
