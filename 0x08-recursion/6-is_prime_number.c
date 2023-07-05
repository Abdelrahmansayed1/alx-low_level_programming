#include "main.h"

/**
 * _sqrt_recursion - Write a function that returns sqyare root of number
 *
 * @n: integer
 *
 * Return: square root of number
*/
int prime(int n, int val);
int is_prime_number(int n)
{
	return prime(n, 2);
}

int prime(int n, int val)
{
	if (val == n)
		return (1);
	else if (n % val == 0)
	{
		return (0);
	}
	else (n % val != 0)
		return (prime(n, val + 1);
}
