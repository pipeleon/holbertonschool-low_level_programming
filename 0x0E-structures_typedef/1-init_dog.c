#include "dog.h"
#include <stdio.h>
/* Task 1 0x0E. C - Structures, typedef  */

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer ro the structure
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
