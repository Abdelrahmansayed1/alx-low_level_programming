#include "main.h"

/**
 * print_square - print square of #
 *
 * @size: represents length and width of square
 *
 * Return: always 0 (success)
*/

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
	}
}
