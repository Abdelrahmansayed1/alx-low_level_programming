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
	char ch = '0';
	char CH = 'a';

	/* prints a-z*/
	while (ch <= '9')
	{
		putchar(ch + '0');
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
