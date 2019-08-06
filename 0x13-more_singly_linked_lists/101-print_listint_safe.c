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
	const listint_t *array[50];

	if (head == NULL)
		return (size);

/*	node = head;*/

	while (head && size < 12)
	{
		i = 0;
		while (i < size)
		{
/*			printf("addres [%lu] =[%p]\n", i, (void *)array[i]);*/
			if (array[i] == head->next)
			{
				printf("[%p] %i\n", (void *)head, head->n);
				head = head->next;
				printf("-> [%p] %i\n", (void *)head, head->n);
				exit(98);
			}
			i++;
		}

		printf("[%p] %i\n", (void *)head, head->n);
		array[size] = head->next;
		head = head->next;
		size++;

	}

	return (size);
}
