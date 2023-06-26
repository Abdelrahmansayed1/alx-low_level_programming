#include "main.h"

/**
 * puts_half - function that prints a string, followed by a new line
 *
 * @str: represents string s
 *
 * Return: always 0 (success)
*/

void puts_half(char *str)
{
	int l, n;

	for (l = 0; str[l] != '\0'; ++l)
		;

	n = (l - 1) / 2;

	while (str[n])
	{
		printf("%c", str[n]);
		n++;
	}
	printf("\n");
}
