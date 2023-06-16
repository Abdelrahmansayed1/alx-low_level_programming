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
	char CH = 'A';

	/* prints a-z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	/*print A -Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH+=;
	}
	putchar('\n');

	return (0);
}

