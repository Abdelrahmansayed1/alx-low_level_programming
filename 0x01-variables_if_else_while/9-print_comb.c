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

	/* prints a-z*/
	while (ch <= 57)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}

	return (0);
}

