#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *
 * @s: represents string s
 *
 * Return: always 0 (success)
*/

void print_rev(char *s)
{
	int count, c;
	char *begin, *end, temp;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	
	begin = s;
	end = s + count -1;

	for (c = 0; c < (count - 1) / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
	printf("%s", s);
}
