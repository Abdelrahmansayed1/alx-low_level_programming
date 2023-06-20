#include "main.h"

/**
 * _abs - returns absolute of number
 *
 * @n: checks input of function
 *
 * Return: returns absolute of `n`
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
	}
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
