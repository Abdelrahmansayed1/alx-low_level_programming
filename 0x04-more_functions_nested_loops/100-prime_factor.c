#include "main.h"
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
	int i;
	long int number = 612852475143;

	while (number != 1)
	{
		for (i = 2; i <= number; i++)
		{
			if (number % i == 0)
			{
				printf("%i ", i);
				number = number / i;
				break;
			}
			if (i == number)
			{
				printf("%li ", number);
			}
		}
	}

	return (0);
}
