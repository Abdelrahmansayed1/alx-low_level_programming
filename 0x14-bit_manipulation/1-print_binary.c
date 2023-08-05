#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			printf("1");
			printed++;
		}
		else if (printed)
		{
			printf("0");
		}
	}
	if (!printed)
		printf("0");
}
