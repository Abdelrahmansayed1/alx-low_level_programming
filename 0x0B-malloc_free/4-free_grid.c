#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Write a function that returns two dimmensional array
 *
 * @grid: multi dimension array
 *
 * @height: int
 *
 * Return: null
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
