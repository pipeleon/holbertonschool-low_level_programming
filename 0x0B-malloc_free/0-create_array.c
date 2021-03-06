#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 0 0x0B. C - malloc, free  */

/**
 * create_array - creates an array of chars
 * @size: Size of the array
 * @c: char to fill the array with
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
