#include "main.h"

/**
 * print_array - function that prints a string, followed by a new line
 *
 * @a: represents string s
 *
 * @n: the number of elements of the array to be printed
 *
 * Return: always 0 (success)
*/

void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if( i = (n - 1))
			printf("%i", a[i]);
		else
			printf("%i, ", a[i]);
	}
	printf("\n");
}
