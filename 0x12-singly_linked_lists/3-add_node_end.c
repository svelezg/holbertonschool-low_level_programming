#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Head pointer
 * @str: String
 * Return: list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new_node;
	list_t *last;

	if (head == NULL)
		return (NULL);
	len = 0;
	while (*(str + len) != '\0')
		len++;
/* 1. allocate node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	last = *head;  /* used in step 5*/
/* 2. put in the data  */
	new_node->str = strdup(str);
	new_node->len = len;
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
