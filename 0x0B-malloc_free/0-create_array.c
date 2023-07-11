#include "main.h"
#include <stdlib.h>

/**
 * f*create_array - Write a function that returns array of chars
 *
 * @size: integer
 *
 * @c : char
 *
 * Return: string of chars
*/

char *create_array(unsigned int size, char c)
{
	char *s = (char * )malloc(size * (sizeof(char)));
	unsigned int i;

	if (size == 0 || s == 0)
		return (0);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
