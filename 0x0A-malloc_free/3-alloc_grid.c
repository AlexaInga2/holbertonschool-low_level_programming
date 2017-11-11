#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: of the array on grid
 * @height: of array on grid
 *
 * Return: a pointer OR NULL on failure, 0, or negative
 */
int **alloc_grid(int width, int height)
{
	int c, r;
	int **grid = NULL;

	if (width > 0 && height > 0)
	{
		grid = malloc(sizeof(int *) * height);
		if (grid == NULL)
			return(NULL);
		for (c = 0; c < height; c++)
		{
			grid[r] = malloc(sizeof(int *) * width);
			if (grid[r] == NULL)
			{
				for (r = c; r >= 0; r--)
					free(grid[r]);
			}
		}
		for (c = 0; c < width; c++)
			grid[c][r] = 0;
	}
	return (grid);
}

/**
 * check if height or width is 0
 * allocate memory to for each row, which are pointters to arrarys of type int
 */
