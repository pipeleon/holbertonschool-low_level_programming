#include "main.h"
/* Task 0 0x05. C - Pointers, arrays and strings  */

/**
 * reset_to_98 - Change a int to 98
 * @n: Number to reset
 * Description: Reset to 98
 * Return: void
 */
void reset_to_98(int *n)
{
	int m;
	int *p;

	m = 98;
	p = &m;

	p = *n;
}
