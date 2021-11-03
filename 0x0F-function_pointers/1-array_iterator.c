#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 1 0x0F. C - Function pointers  */

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: Array
 * @size: Size
 * @action: Function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
