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
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	
	memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
