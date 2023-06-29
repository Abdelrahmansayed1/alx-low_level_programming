#include "main.h"

/**
 * _strncpy - function that concatenate two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * @i: which index the string will concatenated
 *
 * Return: always concatanted string (success)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[ i ] != '\0'; i++)
	{
		dest[ i ] = src[ i ];
	}

	while (i < n)
	{
		dest[ i ] = '\0';
		i++;
	}

	return (dest);
}
