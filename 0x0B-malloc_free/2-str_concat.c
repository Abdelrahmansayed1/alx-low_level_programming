#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_str_cconcat - Write a function that returns a concatenated string
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: string
*/

char *str_concat(char *s1, char *s2)
{
	int length = strlen(s1) + strlen(s2);
	char*s = (char *)malloc(length * sizeof(int) + 1);
	int i;

	if (s == 0)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		if (s1[i] != '\0')
			s[i] = s1[i];
		else if (s2[i] != '\0')
			s[i] = s2[i];
	}

	return (s);
}
