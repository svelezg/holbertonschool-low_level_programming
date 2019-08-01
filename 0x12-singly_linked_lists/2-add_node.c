#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Head pointer
 * @str: String
 * Return: list.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	while (*(str + len) != '0')
		len++;

	/* 1. allocate node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* 2. put in the data  */
	new_node->str = strdup(str);
	new_node->len = len;


	/* 3. Make next of new node as head */
	new_node->next = *head;

	/* 4. move the head to point to the new node */
	*head    = new_node;

	return (*head);
}
