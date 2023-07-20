#include "variadic_functions.h"

/**
 * print_numbers - function used to print args
 *
 * @separator: the char
 *
 * @n: number of args
 *
 * @...: integers
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		x = va_arg(args, int);
		if (i != n)
			printf("%i%s ", x, separator);
		else
			printf("%i",x);
	}
	printf("\n");
}
