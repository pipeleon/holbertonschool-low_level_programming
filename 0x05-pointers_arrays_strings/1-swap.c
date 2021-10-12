#include "main.h"
/* Task 1 0x05. C - Pointers, arrays and strings  */

/**
 * swap_int - Swap numbers
 * @a: Number to swap
 * @b: Number to swap
 * Description: Swap numbers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
