#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint_safe - Prints all the elements of a listint_t list.
 * @head: Head pointer
 * Return: number of elements.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *node;

	if (head == NULL)
		return (size);

	node = head;

	while (node != NULL)
	{

		if (size > 7)
		{
			printf("-> [%p] %i\n", (void *)node, node->n);
			exit(98);
		}
		else
		{
			printf("[%p] %i\n", (void *)node, node->n);
			node = node->next;
			size++;
		}

	}

	return (size);
}
