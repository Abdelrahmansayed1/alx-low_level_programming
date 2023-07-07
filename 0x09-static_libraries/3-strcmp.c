#include "main.h"

/**
 * _strcmp - function that compare two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * Return: 0 if equal (success)
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
