#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 *
 * @a: array
 *
 *
 * @size: size of array
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}

	printf("%i", sum);
}
