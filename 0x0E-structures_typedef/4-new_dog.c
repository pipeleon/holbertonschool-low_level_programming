#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
	char *n;
	char *o;
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		free(n);
		free(o);
		free(d);
		return (NULL);
	}

	n = name;
	o = owner;

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
