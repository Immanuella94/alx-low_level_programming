#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: pointer to record
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t b;
	dog_t *ptr;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	p->name = malloc(n);
	p->owner = malloc(m);

	b.name = name;
	b.age = age;
	b.owner = owner;
	ptr = &b;
	return (ptr);
}
