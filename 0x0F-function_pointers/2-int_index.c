#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 2 0x0F. C - Function pointers  */

/**
 * int_index - searches for an integer
 * @array: Array
 * @size: Size
 * @cmp: Function
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
