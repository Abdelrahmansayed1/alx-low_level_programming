#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i ;
	char word[] = "_putchar";

	for(i = 0; i < strlen(word); i++)
		putchar(word[i]);
	
	return 0;
}
