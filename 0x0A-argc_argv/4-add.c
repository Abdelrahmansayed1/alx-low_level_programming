#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints program name
 *
 * @argc: int
 *
 * @argv: list
 *
 * return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc == 0)
	{
		printf ("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	return (0);
}
