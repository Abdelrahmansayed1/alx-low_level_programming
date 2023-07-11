#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Write a function that returns two dimmensional array
 *
 * @width: int
 *
 * @height: int
 *
 * Return: multi dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **a = malloc(width * height * sizeof(int));
	int i, j;

	if (width < 0 || height < 0)
		return (0);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
