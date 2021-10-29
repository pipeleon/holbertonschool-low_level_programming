#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* Task 4 0x0B. C - malloc, free  */

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2D grid
 * @height: Height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
