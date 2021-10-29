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

	g = malloc(height * sizeof(int *));

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(g[j]);
			free(g);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			g[i][j] = 0;

	return (g);
}
