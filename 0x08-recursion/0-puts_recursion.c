#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string, followed by a new line.
 *
 * @s: string
 *
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		printf("%s", "\n");
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}
