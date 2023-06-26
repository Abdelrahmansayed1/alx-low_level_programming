#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new .
 *
 * @s: represents string s
 *
 * Return: always 0 (success)
*/

void print_rev(char *s)
{
	int i = 0;

	while( s[i])
		i++;

	while( i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
