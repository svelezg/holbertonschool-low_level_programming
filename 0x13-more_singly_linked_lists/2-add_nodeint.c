#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - Adds a new node at the beginning of a list_t list.
 * @head: Head pointer
 * @n: Integer
 * Return: list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* 1. allocate node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* 2. put in the data  */
	new_node->n = n;

	/* 3. Make next of new node as head */
	new_node->next = *head;

	/* 4. move the head to point to the new node */
	*head    = new_node;

	return (*head);
}
