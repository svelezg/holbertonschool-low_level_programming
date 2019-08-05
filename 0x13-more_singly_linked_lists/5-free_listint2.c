#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * free_listint2 - Frees a list_t list.
 * @head: Head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;


 /* deref head to get the real head */
	current = *head;

/* setting head to null */
	*head = NULL;
	head = NULL;

/* traverse list and free each node */
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

}
