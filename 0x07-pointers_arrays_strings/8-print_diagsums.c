#include <stdio.h>
#include "main.h"
/* Task 7 0x07. C - Even more pointers, arrays and strings  */

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Matrix
 * @size: Size of matrix
 * Description: Prints the sum of the two diagonals of a square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1, s2;

	s1 = 0;
	for (i = 0; i < size; i++)
	{
		s1 = s1 + *(a + (i * (size + 1)));
	}

	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s2 = s2 + *(a + ((i + 1) * (size - 1)));
	}

	printf("%d, %d", s1, s2);
	putchar('\n');
}
