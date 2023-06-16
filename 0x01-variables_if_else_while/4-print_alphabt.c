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

        while (ch <= 'z')
        {
		if(ch == 'q' || ch == 'e')
			continue;
		else
                putchar(ch);
                ch++;
        }
        putchar('\n');

        return (0);
}

