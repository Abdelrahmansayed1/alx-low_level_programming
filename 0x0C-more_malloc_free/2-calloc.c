#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - concatenates two strings
 *
 * @nmemb: int 1
 *
 * size: int 2
 *
 * Return: nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *m = malloc(nmemb * size);

	if (m == 0)
		return (NULL);
	else
		return (m);
}
