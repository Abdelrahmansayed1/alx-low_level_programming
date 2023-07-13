#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: int
 *
 * Return: nothing
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = strlen(s1);
	unsigned int length = size1 + n;
	char *s = malloc(length * sizeof(char) + 1);
	int i;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	if (s == 0)
		return (0);

	for (i = 0; i < length; i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
