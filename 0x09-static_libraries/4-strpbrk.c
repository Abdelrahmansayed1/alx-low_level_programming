#include "main.h"

/**
 * _strpbrk - function that searches a string for a set of bytes
 *
 * @s: pointer to string
 *
 * @accept: pointer to string
 *
 * Return: pointer to string
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}

	return (0);
}
