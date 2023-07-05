#include "main.h"
#include <stdbool.h>

/**
 * _sqrt_recursion - Write a function that returns sqyare root of number
 *
 * @n: integer
 *
 * Return: square root of number
*/


int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
