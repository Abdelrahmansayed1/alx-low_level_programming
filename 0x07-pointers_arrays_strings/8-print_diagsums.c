#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 *
 * @a: array
 *
 * @size: size of array
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0; sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}

	printf("%i, ", sum1);
	printf("%i\n", sum2);
}
