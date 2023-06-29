#include "main.h"

/**
 * rev_array - function that reverses array.
 *
 * @a: represents string 1
 *
 * @n: represents numbers of elements in array/
 *
*/

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int rev[n];

	for (i = n-1; i >= 0; i--)
	{
		rev[j] = a[i];
		j++;
	}
}
