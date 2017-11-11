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
	int col, row;
	int **grid = NULL;

	if (width > 0 && height > 0)
	{
		grid = malloc(sizeof(int *) * height);
		if (grid == NULL)
			return (NULL);
		for (row = 0; row < height; row++)
		{
			grid[row] = malloc(sizeof(int) * width);
			if (grid[row] == NULL)
			{
				for (col = row; col >= 0; col--)
					free(grid[col]);
				free(grid);
				return (NULL);
			}
		}
		for (row = 0; row < height; row++)
		{
			for (col = 0; col < width; col++)
			grid[row][col] = 0;
		}
	}
	return (grid);
}
