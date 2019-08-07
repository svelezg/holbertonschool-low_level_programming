#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Head pointer
 * Return: The address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast;
	listint_t *slow;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		fast = fast->next;
		fast = fast->next;
		slow = slow->next;

		if (slow == fast && slow == head)
		{
			return (slow);
		}
		else if (slow == fast)
		{
			slow = find_listint_loop(head->next);
			if (slow)
				return (slow);
		}
	}

	return (NULL);
}
