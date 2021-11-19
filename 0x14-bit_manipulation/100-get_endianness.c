#include <stdio.h>
/* Task 100 0x14. C - Bit manipulation  */

/**
 * get_endianness - checks the endianness.
 *
 * Return: int
 */
int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
