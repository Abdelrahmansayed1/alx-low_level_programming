#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array of integers
 *
 * @min: int 1
 *
 * max: int 2
 *
 * Return: array
*/

int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (!array)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[i] = i;
	}

	return (array);
}
