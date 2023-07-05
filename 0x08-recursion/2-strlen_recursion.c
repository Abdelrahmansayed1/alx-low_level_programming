#include "main.h"

/**
 * _strlen_recursion - Write a function that returns a length of string.
 *
 * @s: string
 *
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

