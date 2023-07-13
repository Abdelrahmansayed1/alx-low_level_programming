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
	int *m = malloc(size * nmemb);

	if (m == 0)
		return (NULL);
	
	memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
