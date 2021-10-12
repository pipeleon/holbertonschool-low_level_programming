#include <stdio.h>
#include "main.h"
/* Task 8 0x05. C - Pointers, arrays and strings  */

/**
 * print_array - Prints n of an array
 * @a: Array to print half
 * @n: Number of positions to print
 * Description: Takes an array and prints the first n
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	putchar('\n');
}
