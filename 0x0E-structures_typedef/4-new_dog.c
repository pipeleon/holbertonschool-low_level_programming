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
	dog_t *d;
	int len1, len2;
	int i;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	len1 = 0, len2 = 0;
	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;
	d->name = malloc(len1 * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(len2 * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len2; i++)
		d->owner[i] = owner[i];

	return (d);
}
