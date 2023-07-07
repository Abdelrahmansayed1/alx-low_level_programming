#include "main.h"

/**
 * *_memcpy - function used to copies memory area
 *
 * @dest: pointer to string dest
 *
 * @src: pointer to copied string
 *
 * @n: number of bytes to be copied
 *
 * Return: pointer to string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
