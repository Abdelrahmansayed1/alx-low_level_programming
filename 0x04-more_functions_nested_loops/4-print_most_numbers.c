#include "main.h"

/**
 * print_most_numbers - return from 0 to 9
 *
 * Return: Always 0 (success):
*/

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
			continue;
		_putchar(a);
	}
	_putchar('\n');	
}
