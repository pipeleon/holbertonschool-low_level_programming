#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 3 0x0C. C - More malloc, free */

/**
 * array_range -  creates an array of integers
 * @min: Min
 * @max: Max
 *
 * Return: void
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *p;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);


	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);
}
