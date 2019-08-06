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
	size_t i;
	const listint_t *array[500];

	if (head == NULL)
		exit(98);

/*	node = head;*/

	while (head)
	{
		i = 0;
		while (i < size)
		{
/*			printf("addres [%lu] =[%p]\n", i, (void *)array[i]);*/
			if (array[i] == head)
			{
				printf("-> [%p] %i\n", (void *)head, head->n);
				return (size);
			}
			i++;
		}

		printf("[%p] %i\n", (void *)head, head->n);
		array[size] = head;
		head = head->next;
		size++;

	}

	return (size);
}
