#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Write a function that returns a pointer to a newly
 *
 * @str: string
 *
 * Return: string of chars
*/

char *_strdup(char *str)
{
	int length = strlen(str);
	char *s = (char *)malloc(length * sizeof(*str) + 1);
	int i;

	if (s == 0)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
