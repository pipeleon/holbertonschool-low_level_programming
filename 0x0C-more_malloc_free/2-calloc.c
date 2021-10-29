#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 2 0x0C. C - More malloc, free */

/**
 * _calloc -  allocates memory for an array
 * @nmemb: Number of bytes
 * @size: Size
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
