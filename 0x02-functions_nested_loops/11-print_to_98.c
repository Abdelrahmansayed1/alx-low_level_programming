#include "main.h"

/**
 * times_table - returns from 0 to 98
 *
 * @n: number input
 *
*/

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n == 98)
			printf("%i",n);
		else
			printf("%i, ", n);
	}
}
