#include "dog.h"
#include <stdio.h>
/* Task 4 0x0E. C - Structures, typedef  */

/**
 * new_dog -  creates a new dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char n, o;
	dog_t *d;

	n = name;
	o = owner;

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
