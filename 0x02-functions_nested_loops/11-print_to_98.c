#include "main.h"

/**
 * times_table - returns from 0 to 98
 *
 * @n: number input
 *
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			 if (n == 98)
                        	printf("98\n");
                	else
                        	printf("%i, ", n);
                	n--;
		}
	}
	else
	{
		while (n <= 98)
        	{
                if (n == 98)
                        printf("98\n");
                else
                        printf("%i, ", n);
                n++;
        	}

	}
}
