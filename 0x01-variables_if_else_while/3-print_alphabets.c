#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : print
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

