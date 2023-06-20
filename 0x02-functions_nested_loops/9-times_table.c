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
		printf("%i",0);
		for ( col = 1; col <= 9; col++)
		{
			printf(", ");
			number = row * col;
			if (number <= 9)
				printf(" ");
			else	
				printf("");

			printf("%i",number);
		}
		printf("\n");
	}
}

