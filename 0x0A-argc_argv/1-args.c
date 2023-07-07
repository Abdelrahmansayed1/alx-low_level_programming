#include <stdio.h>

/**
 * main - prints program name
 *
 * @argc: int
 *
 * @argv: list
 *
 * return: 0
*/

int main(int argc, char const *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
