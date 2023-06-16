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
	int ch = 48;
	char CH = 'a';

	/* prints a-z*/
	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}

	/*print A -Z*/
	while (CH <= 'f')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
