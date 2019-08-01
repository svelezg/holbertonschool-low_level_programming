#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - Frees a list_t list.
 * @head: Head pointer
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

 /* deref head to get the real head */
	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

/* deref head_ref to affect the real head back in the caller. */
	head = NULL;
}
