#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: represents saddress of a
 *
 * @b: represents address of b
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
