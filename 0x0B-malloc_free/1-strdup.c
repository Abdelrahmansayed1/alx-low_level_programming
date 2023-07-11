#include "main.h"
#include <stdlib.h>

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
	char *s = (char*)malloc(length);
	
	while (str--)
	{
		*s = *str;
	}
	return (s);
}
