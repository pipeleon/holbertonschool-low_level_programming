#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 5 0x0E. C - Structures, typedef  */

/**
 * free_dog -  free dog struct
 * @d: Dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
