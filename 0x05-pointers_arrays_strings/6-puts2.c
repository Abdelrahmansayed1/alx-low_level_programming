#include "main.h"

/**
 * _puts2 - function that prints a string, followed by a new line
 *
 * @str: represents string s
 *
 * Return: always 0 (success)
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
