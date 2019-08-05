#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * free_listint - Frees a list_t list.
 * @head: Head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;


 /* deref head to get the real head */
	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

}
