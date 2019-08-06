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


	if (head == NULL || *head == NULL)
		return;


 /* deref head to get the real head */
	current = *head;

/* traverse list and free each node */
	while (current != NULL)
	{
		next = current->next;
		current->next = NULL;
		free(current);
		current = next;
	}

/* setting head to null */
	*head = NULL;

}
