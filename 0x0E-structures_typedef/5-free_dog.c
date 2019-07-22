#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Free dog
 * @d: struct
 */
void free_dog(dog_t *d)
{
		free(d->name);
		free(d->owner);
		free(d);
}
