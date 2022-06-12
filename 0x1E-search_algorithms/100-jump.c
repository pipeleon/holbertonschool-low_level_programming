#include "search_algos.h"
/* Task 100 0x1E. C - Search Algorithms */

/**
 * jump_search - searches for a value with the jump algorithm
 * @array: pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: index for the value search
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, m;

	if (array == NULL)
	{
		return (-1);
	}

	m = sqrt(size);

	for (i = 0; ; i = i + m)
	{
		if (array[i] >= value || i > size)
		{
			if (i == 0)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", i, i + m);
			}
			else
			{
				printf("Value found between indexes [%ld] and [%ld]\n", i - m, i);
			}
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	if (i == 0)
	{
		i = i + m;
	}

	for (j = i - m; j <= i; j++)
	{
		if (j < size)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			if (array[j] == value)
			{
				return (j);
			}
		}
	}

	return (-1);
}
