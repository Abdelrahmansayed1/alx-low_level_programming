#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: represents string s
 *
 * Return: always 0 (success)
*/

void _puts(char *str)
{
	while (*str != '!')
	{
		printf("%s", str);
		str++;
	}
	printf("\n");
}
