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
	int i, j;

	i = 0;

	while (dest[ i ])
	{
		i++;
	}
	
	for (j = 0; j < n && src[ j ] != '\0'; j++)
	{
		dest[ i + j ] = src[ j ];
	}

	dest[ i + j ] = '\0';

	return (dest);
}
