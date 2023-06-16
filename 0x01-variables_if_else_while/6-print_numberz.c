#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		/*conver to ASCII*/
		putchar(i + '0');
		i++;
	}
	putchar("\n");

	return (0);
}
