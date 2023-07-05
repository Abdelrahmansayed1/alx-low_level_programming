#include "main.h"

/**
 * factorial - Write a function that returns factorial of number
 *
 * @n: integer
 *
 * Return: factorial n
*/

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
