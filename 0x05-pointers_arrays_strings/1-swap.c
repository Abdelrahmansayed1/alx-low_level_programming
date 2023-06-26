#include "main.h"

/**
 * swap - function that swaps the values of two integers
 *
 * @n: represents space
 *
 * Return: always 0 (success)
*/

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
