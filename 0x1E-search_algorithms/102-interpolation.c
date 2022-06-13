#include "search_algos.h"
/* Task 1 0x1E. C - Search Algorithms */

/**
 * interpolation_search2 - searches for a value
 * @array: pointer to the first element of the array
 * @lo: begin search
 * @hi: end search
 * @va: Value to search
 *
 * Return: index for the value search
 */
int interpolation_search2(int *array, size_t lo, size_t hi, int va)
{
	size_t pos;

	pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) * (va - array[lo]));

	if (pos > hi)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	else
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	}

	if (lo <= hi && va >= array[lo] && va <= array[hi])
	{
		if (array[pos] == va)
		{
			return (pos);
		}
		else if (array[pos] < va)
		{
			return (interpolation_search2(array, pos + 1, hi, va));
		}
		else
		{
			return (interpolation_search2(array, lo, pos - 1, va));
		}
	}

	return (-1);
}

/**
 * interpolation_search - searches for a value
 * @array: pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: index for the value search
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	return (interpolation_search2(array, 0, size - 1, value));
}
