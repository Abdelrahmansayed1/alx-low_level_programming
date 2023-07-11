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
	int **a = malloc(sizeof(*a) * height);
	int i, j;

	if (width <= 0 || height <= 0 || a == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(**a) * width);
		if (a[i] == 0)
		{
			while (i--)
				free(a[i]);
			free(a);
			return(NULL);
		}

		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
