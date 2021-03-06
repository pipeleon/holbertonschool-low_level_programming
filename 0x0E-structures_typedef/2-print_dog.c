#include "dog.h"
#include <stdio.h>
/* Task 2 0x0E. C - Structures, typedef  */

/**
 * print_dog - Print variable of type struct dog
 * @d: Pointer ro the structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
