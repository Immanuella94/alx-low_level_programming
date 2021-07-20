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

	b.name = name;
	b.age = age;
	b.owner = owner;
	ptr = &b;
	return (ptr);
}
