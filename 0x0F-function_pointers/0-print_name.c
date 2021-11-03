#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 0 0x0F. C - Function pointers  */

/**
 * print_name - prints a name
 * @name: Name
 * @f: Function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
