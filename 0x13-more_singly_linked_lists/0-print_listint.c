#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Head pointer
 * Return: number of elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
