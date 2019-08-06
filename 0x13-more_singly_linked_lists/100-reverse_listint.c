#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Head pointer
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;
	listint_t *next;

	if (!head || !(*head))
		return (NULL);

	prev = NULL;
	curr = *head;
	next = NULL;


	while (curr != NULL)
	{
/*		Advance node*/
		next = curr->next;

/*		Point current to previous (reverse)*/
		curr->next = prev;

/*		Move prev and curr one step forward*/
		prev = curr;
		curr = next;
	}


	*head = prev;
	return (*head);
}
