#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 3 0x0B. C - malloc, free  */

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: Width
 * @height: Height
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **g;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	g = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		g[i] = (int *)malloc(height * sizeof(int));

	if (g == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			g[i][j] = 0;

	return (g);
}
