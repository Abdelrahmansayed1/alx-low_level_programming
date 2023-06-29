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
	int i, j, t;

	for (i = 0, j = n - 1; i < j; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
