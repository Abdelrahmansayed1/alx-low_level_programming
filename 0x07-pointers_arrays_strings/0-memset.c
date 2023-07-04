#include "main.h"
#include "string.h"
#include "stdlib.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte
 *
 * @s: represents string 1
 *
 * @b: represents string 2
 *
 * @n: which index the string will concatenated
 *
 * Return: always concatanted string (success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *a = malloc(256);
	strcpy(a, s);

	for (unsigned int i = 0; i < n; i++)
	{
		a[i] = b;
	}

	return (a);
}
