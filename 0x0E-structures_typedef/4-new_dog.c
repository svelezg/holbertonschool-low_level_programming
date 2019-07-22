#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l_name = 0, l_owner = 0, i, j;
	dog_t *ptr;
	char *n_name, *n_owner;

	while (*(name + l_name) != '\0')
		l_name++;

	while (*(owner + l_owner) != '\0')
		l_owner++;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return (NULL);
	n_name = malloc(sizeof(char) * (1 + l_name));
	if (n_name == NULL)
	{
		free(ptr);
		free(n_name);
		return (NULL);
	}
	n_owner = malloc(sizeof(char) * (1 + l_owner));
	if (n_owner == NULL)
	{
		free(ptr);
		free(n_owner);
		free(n_name);
		return (NULL);
	}
	for (i = 0 ; i <= l_name ; i++)
		*(n_name + i) = *(name + i);
/*	k = sizeof(n_name);*/
/*	printf("%s  %d\n", n_name, k);*/
	for (j = 0 ; j <= l_owner ; j++)
		*(n_owner + j) = *(owner + j);
/*	printf("%s\n", n_owner);*/

	ptr->name = n_name;
	ptr->age = age;
	ptr->owner = n_owner;
	return (ptr);
}
