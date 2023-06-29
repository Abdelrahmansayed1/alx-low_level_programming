#include "main.h"

/**
 * _strcat - function that concatenate two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * Return: always concatanted string (success)
*/

char *_strcat(char *dest, char *src)
{
	int i;

	while (dest[i])
	{
		i++
	}
	for (int j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	
	
	return (dest);
}
