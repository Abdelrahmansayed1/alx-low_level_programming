#include "main.h"

/**
 * _strncat - function that concatenate two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * @i: which index the string will concatenated
 *
 * Return: always concatanted string (success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, l;

	i = 0;

	while (dest[i])
	{
		i++;
	}
	
	while (dest[l])
	{
		l++;
	}

	if (n >= l)
	{
		for (j = 0; src[j]; j++)
		{
			dest[i++] == src[j];
		}
	}
	else
	{
		for (j = 0; src[n]; j++)
		{
			dest[i++] == src[j];
		}
		dest[i + j] = '\0';
	}
}
