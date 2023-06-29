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

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (int j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
		}
	}
	dest[i] = '\0';
	
	return (dest);
}
