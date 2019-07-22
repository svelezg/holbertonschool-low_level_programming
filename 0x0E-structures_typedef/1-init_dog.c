#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: Dog d struct
 * @name: Dog d's name
 * @age: Dog d's age
 * @owner: Dog d's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
