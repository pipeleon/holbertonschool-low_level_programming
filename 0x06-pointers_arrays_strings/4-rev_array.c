#include "main.h"
/* Task 4 0x06. C - More pointers, arrays and strings  */

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array
 * @n: Number of elements of array
 * Description: Reverses the content of an array of integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = n - 1;
	for (j = 0; j < i; j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		i--;
	}
}
