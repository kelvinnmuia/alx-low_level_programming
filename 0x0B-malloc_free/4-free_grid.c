#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid - function
 * @grid: pointer to the grid
 * @height: height
 * Return: Returns a 2d array
 */
void free_grid(int **grid, int height)
{
	while (height)
	{
		free(grid[--height]);
	}
	free(grid);
}
