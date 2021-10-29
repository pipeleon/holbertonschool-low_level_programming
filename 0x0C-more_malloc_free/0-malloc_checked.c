#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 0 0x0C. C - More malloc, free */

/**
 * malloc_checked - allocates memory using malloc
 * @b: Argunment to pass
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
