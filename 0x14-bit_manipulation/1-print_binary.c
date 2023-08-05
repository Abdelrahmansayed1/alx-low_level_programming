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
			printf("%c", '1');
			printed++;
		}
		else if (printed)
		{
			printf("%c", '0');
		}
	}
	if (!printed)
		printf("%c", '0');
}
