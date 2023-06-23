#include "main.h"

/**
 * print_line - print line of dashes
 *
 * @n: represents space
 *
 * Return: always 0 (success)
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
