# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
  * free_grid - free allocation space
  * @grid: Array
  * @height: int
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
