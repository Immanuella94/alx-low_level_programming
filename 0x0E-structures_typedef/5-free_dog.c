#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dog
 * @d: pointer
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
