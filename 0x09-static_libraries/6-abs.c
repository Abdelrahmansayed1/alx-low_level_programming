#include "main.h"

/**
 * _abs - returns absolute of number
 *
 * @n: checks input of function
 *
 * Return: returns absolute of `n`
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
