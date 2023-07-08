#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 *
 * @argc: int
 *
 * @argv: list
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%i\n", n1 * n2);
	}
	return (0);
}
