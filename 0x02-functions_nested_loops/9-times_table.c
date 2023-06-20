#include "main.h"

/**
 * times_table - returns 9 times table
 *
*/

void times_table(void)
{
	int row, col, number;

	for (row = 0; row <= 9; row++)
	{
		for ( col = 0; col <= 9; col++)
		{
			number = row * col;
			printf("%i, ",number);
		}
	}
}

