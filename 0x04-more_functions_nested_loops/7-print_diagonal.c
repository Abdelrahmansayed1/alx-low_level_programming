#include "main.h"

/**
 * print_diagonal - print diagonal
 *
 * @n: represents space
 *
 * Return: always 0 (success)
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == n)
					_putchar('/');
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
