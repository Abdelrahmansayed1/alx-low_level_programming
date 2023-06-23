#include <string.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: a
 *
 * Return: 0 (success)
*/
#define MAXSTRING 80

int main(void)
{
	int i;
	char word[] = "_putchar";

	for (i = 0; i < MAXSTRING; i++)
	{
		if (word[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(word[i]);
	}
	return (0);
}
