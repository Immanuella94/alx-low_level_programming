#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable to initialize
 * @name: character
 * @age: float
 * @owner: character
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog a;

	d->name = name;
	d->age = age;
	d->owner = owner;
	d = &a;
}
