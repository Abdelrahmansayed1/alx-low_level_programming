#include "variadic_functions.h"

/**
 * print_strings - function used to print args
 *
 * @separator: the char
 *
 * @n: number of args
 *
 * @...: integers
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list arg;
	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(arg, n);
	
	for (i = 1; i <= n; i++)
	{
		x = va_arg(arg, char*);
		if (i != n)
			printf("%s%s", x != NULL ? x : "(nil)", separator);
		else
			printf("%s", x != NULL ? x : "(nil)");
	}

	printf("\n");
	va_end(arg);
}
