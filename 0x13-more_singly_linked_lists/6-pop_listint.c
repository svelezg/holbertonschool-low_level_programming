#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * pop_listint -deletes the head node of a listint_t linked list.
 * @head: Head pointer
 * Return: head nodes data.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int value = 0;

 /* deref head to get the real head */
	current = *head;

	*head = current->next;

	value = current->n;
	current->n = 0;
	current->next = NULL;
	free(current);

return (value);

}
