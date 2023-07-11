#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Write a function that returns a concatenated string
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: string
*/

char *str_concat(char *s1, char *s2)
{
	int size1 = strlen(s1);
	int length = strlen(s1) + strlen(s2);
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
