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
		for ( col = 0; col <= 9; col++)
		{
			printf(", ");
			number = row * col;
			if (number < 9)
				printf(" ");
			else	
				printf("%i",number);

			printf("%i",number);
		}
		printf("\n");
	}
}

