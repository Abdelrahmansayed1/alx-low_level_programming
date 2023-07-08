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
	int change = atoi(argv[1]);
	int i;
	int cents[] = {25, 10, 5, 2, 1};
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (change >= cents[i])
			{
				sum += change / cents[i];
				change = change % cents[i];
				if (change % cents[i] == 0)
					break;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
