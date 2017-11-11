#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees alloc_grid's function of 2 dimensional grid
 * if grid is NULL or height is 0, continue
 * @grid: pointer to the first row of grid
 * @height: the number of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

/* insures grid will not crash if invalid */
	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
