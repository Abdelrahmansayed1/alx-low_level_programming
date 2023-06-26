#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: represents string s
 *
 * Return: always 0 (success)
*/

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	
	return (i);
}
