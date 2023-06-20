#include "main.h"

/**
 * print_alphabet - print form a to z
 *
*/

void print_alphabet_x10(void)
{
	int ch;
	int i;
	for (i = 0; i < 11; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
