#include "main.h"

/**
 * _sqrt_recursion - Write a function that returns sqyare root of number
 *
 * @n: integer
 *
 * Return: square root of number
*/

int _sqrt_recursion(int n)
{
	int i;
	bool isSqrt;
	
	isSqrt = false;
	for (i = 0; i < n; i++)
	{
		if (n / i == i)
		{
			isSqrt = true;
			break;
		}
	}

	if (!isSqrt)
		return (-1);
	else if (n == 1)
		return (1);
	for ( i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (i * _sqrt_recursion(n / i));
		}
	}
}
