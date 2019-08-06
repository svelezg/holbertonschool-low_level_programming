#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * free_listint_safe - Free lists with a loop.
 * @h: Head pointer
 * Return: number of elements.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	size_t i;
	listint_t *next;
	listint_t *array[500];

	if (h == NULL || *h == NULL)
		exit(98);

	while (*h)
	{
		i = 0;
		while (i < size)
		{
/*			printf("addres [%lu] =[%p]\n", i, (void *)array[i]);*/
			if (array[i] == *h)
			{
/*				printf("-> [%p] %i\n", (void *)head, head->n);*/
				*h = NULL;
				h = NULL;
				return (size);
			}
			i++;
		}

		array[size] = *h;

		next = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = next;
		size++;
	}


	*h = NULL;
	h = NULL;

	return (size);
}
