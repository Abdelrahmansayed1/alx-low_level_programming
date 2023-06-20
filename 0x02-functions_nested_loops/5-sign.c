#include "main.h"

/**
 * print_sign - check sign of n
 *
 * @n: checks input of function
 *
 * Return: returns 1 if `n` is positive or `0` if `n` is zero or `-1` 
 * 	if n is negative
*/

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}

