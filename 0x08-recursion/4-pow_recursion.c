#include "main.h"

/**
 * _pow_recursion - Write a function that returns power of number
 *
 * @x: integer
 *
 * @y: power
 *
 * Return: power of number
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y-1));
}
