#include "search_algos.h"
/* Task 1 0x1E. C - Search Algorithms */

/**
 * binary_search2 - searches for a value
 * @array: pointer to the first element of the array
 * @a: begin search
 * @b: end search
 * @value: Value to search
 *
 * Return: index for the value search
 */
int binary_search2(int *array, size_t a, size_t b, int value)
{
    size_t i, size, middle;

    printf("Searching in array: ");
    for (i = a; i < b; i++)
    {
        printf("%d", array[i]);
        if (i < b - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    size = b - a;

    if (size <= 1)
    {
        return (-1);
    }

    if (size % 2 == 0)
    {
        middle = size / 2;
        if (array[a + middle - 1] == value)
        {
            return (a + middle - 1);
        }
        else if (array[a + middle - 1] > value)
        {
            return (binary_search2(array, a, b - middle - 1, value));
        }
        else
        {
            return (binary_search2(array, a + middle, b, value));
        }
    }
    else
    {
        middle = (size + 1) / 2;
        if (array[a + middle] == value)
        {
            return (a + middle);
        }
        else if (array[a + middle] > value)
        {
            return (binary_search2(array, a, b - middle - 1, value));
        }
        else
        {
            return (binary_search2(array, a + middle, b, value));
        }
    }
}

/**
 * binary_search - searches for a value
 * @array: pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: index for the value search
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return (-1);
    }

    return binary_search2(array, 0, size, value);
    
}